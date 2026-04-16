#include <unistd.h>
#include <stdlib.h>

int	ft_popen(const char *file, char *const argv[], char type)
{
	int	pid;
	int	fd[2];

	if (!file || !argv || (type != 'r' && type != 'w')) return -1;
	if (pipe(fd) == -1) return -1;
	pid = fork();
	if (pid == -1) return (close(fd[0]), close(fd[1]), -1);
	if (pid == 0)
	{
		if (type == 'r')
		{
			if (dup2(fd[1], 1) == -1) exit(1);
		}
		else
		{
			if (dup2(fd[0], 0) == -1) exit(1);
		}
		close(fd[0]);
		close(fd[1]);
		exevp(file, argv);
		exit(1);
	}
	if (type == 'r')
		return (close(fd[1]), fd[0]);
	else
		return (close(fd[0]), fd[1]);
	return 0;
}
