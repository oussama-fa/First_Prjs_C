// Assignment name  : sandbox
// Expected files   : sandbox.c
// Allowed functions: fork, waitpid, exit, alarm, sigaction, kill, printf, strsignal,
// errno, sigaddset, sigemptyset, sigfillset, sigdelset, sigismember
// --------------------------------------------------------------------------------------

// Write the following function:

// #include <stdbool.h>
// int sandbox(void (*f)(void), unsigned int timeout, bool verbose);

// This function must test if the function f is a nice function or a bad function, you
// will return 1 if f is nice, 0 if f is bad or -1 in case of an error in your function.

// A function is considered bad if it is terminated or stopped by a signal (segfault, abort...),
// if it exit with any other exit code than 0 or if it times out.

// If verbose is true, you must write the appropriate message among the following:
// "Nice function!\n"
// "Bad function: exited with code <exit_code>\n"
// "Bad function: <signal description>\n"
// "Bad function: timed out after <timeout> seconds\n"

// You must not leak processes (even in zombie state, this will be checked using wait).

// We will test your code with very bad functions.

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <signal.h>
#include <errno.h>
#include <sys/wait.h>
#include <sys/types.h>
#include <string.h>

static pid_t child_pid;

void alarm_handler(int sig)
{
    (void)sig;
}

int sandbox(void (*f)(void), unsigned int timeout, bool verbose)
{
    struct sigaction sa;
    pid_t pid;
    int status;

    sa.sa_handler = alarm_handler;
    sa.sa_flags = 0;
    sigemptyset(&sa.sa_mask);
    sigaction(SIGALRM, &sa, NULL);
    pid = fork();
    if (pid == -1)
        return -1;    
    if (pid == 0)
    {
        f();
        exit(0);
    }
    child_pid = pid;
    alarm(timeout);
    if (waitpid(pid, &status, 0) == -1)
    {
        if (errno == EINTR)
        {
            kill(pid, SIGKILL);
            waitpid(pid, NULL, 0);
            if (verbose)
                printf("Bad function: timed out after %d seconds\n", timeout);
            return 0;
        }
        return -1;
    }
    if (WIFEXITED(status))
    {

        if (WEXITSTATUS(status) == 0)
        {
            if (verbose)
                printf("Nice function!\n");
            return 1;
        }
        else
        {
            if (verbose)
                printf("Bad function: exited with code %d\n", WEXITSTATUS(status));
            return 0;
        }
    }
    if (WIFSIGNALED(status))
    {
        int sig = WTERMSIG(status);
        if (verbose)
            printf("Bad function: %s\n", strsignal(sig));
        return 0;
    }
    return -1;
}
// End
void nice_function(void)
{
    return;
}

void bad_function_exit_code(void)
{
    exit(1);
}

void bad_function_segfault(void)
{
    int *ptr = NULL;
    *ptr = 42;
}

void bad_function_timeout(void)
{
    while (1) {}
}

void bad_function_abort(void)
{
    abort();
}

int main()
{
    int result;

    printf("Testing nice function:\n");
    result = sandbox(nice_function, 5, true);
    printf("Result: %d\n\n", result);  // Esperado: 1

    printf("Testing bad function (segfault):\n");
    result = sandbox(bad_function_segfault, 5, true);
    printf("Result: %d\n\n", result);  // Esperado: 0

    printf("Testing bad function (timeout):\n");
    result = sandbox(bad_function_timeout, 2, true);
    printf("Result: %d\n\n", result);  // Esperado: 0

    return 0;
}
