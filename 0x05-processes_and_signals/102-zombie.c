#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <unistd.h>

/**
 * infinite_while - Run an infinite while loop
 *
 * Return: Always 0.
 */
int infinite_while(void)
{
	while (1)
	{
		sleep(1);
	}
	return (0);
}

/**
 * main - Cteate five (5) zombie processes
 *
 * Return: Always 0.
 */
int main(void)
{
	int i;

	for (i = 0; i < 5; i += 1)
	{
		pid_t pid;

		pid = fork();
		if (!pid)
			return (1);
		printf("Zombie process created, PID: %d\n", pid);
	}

	infinite_while();
	return (0);
}
