#include <stdio.h>
#include <unistd.h>

/**
 * main - PID
 *
 * Return: Always 0.
 */
int main(void)
{
	char *argv[] = {"/bin/bash", "-l", NULL};
	int val = execve(argv[0], argv, NULL);
	if (val == -1)
		perror("Err0r");
	printf("SUcceess");
	return (0);
}
