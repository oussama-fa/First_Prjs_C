// Assignment name  : ft_popen
// Expected files   : ft_popen.c
// Allowed functions: pipe, fork, dup2, execvp, close, exit
// --------------------------------------------------------------------------------------

// Write the following function:

// int ft_popen(const char *file, char *const argv[], char type);

// The function must launch the executable file with the arguments argv (using execvp).
// If type is 'r' the function must return a file descriptor connected to the output of the command.
// If type is 'w' the function must return a file descriptor connected to the input of the command.
// In case of error or invalid parameter the function must return -1.

// For example, the function could be used like that:

// int main()
// {
//     int  fd;
//     char *line;

//     fd = ft_popen("ls", (char *const []){"ls", NULL}, 'r');
//     while ((line = get_next_line(fd)))
//         ft_putstr(line);
//     return (0);
// }


// int	main() {
// 	int	fd = ft_popen("ls", (char *const []){"ls", NULL}, 'r');
// 	dup2(fd, 0);
// 	fd = ft_popen("grep", (char *const []){"grep", "c", NULL}, 'r');
// 	char	*line;
// 	while ((line = get_next_line(fd)))
// 		printf("%s", line);
// }


// Hints:
// Do not leak file descriptors!
// This exercise is inspired by the libc's popen().

#include <unistd.h>
#include <stdlib.h>
#include <sys/wait.h>

int ft_popen(const char *file, char *const argv[], char type)
{
	int fds[2];
	pid_t pid;
	
	if (!file || !argv || (type != 'r' && type != 'w'))
		return -1;
	if (pipe(fds) == -1)
		return -1;
	pid = fork();
	if (pid == -1)
	{
		close(fds[0]);
		close(fds[1]);
		return -1;
	}
	if (pid == 0)
	{
		if (type == 'r')
		{
			if (dup2(fds[1], STDOUT_FILENO) == -1)
				exit(1);
		}
		else  // type == 'w'
		{
			if (dup2(fds[0], STDIN_FILENO) == -1)
				exit(1);
		}
		close(fds[0]);
		close(fds[1]);
		execvp(file, argv);
		exit(1);
	}
	if (type == 'r')
	{
		close(fds[1]);
		return fds[0];
	}
	else  // type == 'w'
	{
		close(fds[0]);
		return fds[1];
	}
}

// int main()
// {
// 	int fd;
	
// 	fd = ft_popen("wc", (char *const []){"wc", "-l", NULL}, 'w');
// 	if (fd == -1)
// 		return 1;
// 	write(fd, "line 1\n", 7);
// 	write(fd, "line 2\n", 7);
// 	write(fd, "line 3\n", 7);
// 	close(fd);
// 	return 0;
// }