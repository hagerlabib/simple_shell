#include <stdio.h>
#include <unistd.h>

int main(void)
{
	pid_t pid;

	printf("Before I was\n");

	pid = fork();
	if (pid == -1)
	{
		perror("Unsuccessful\n");
		return(1);
	}
	if (pid == 0)
	{
		printf("I am the child\n");
	}
	else
	{
		sleep(30);
		printf("Iam the paren\n");
	}

	return (0);
}
