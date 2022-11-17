#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>
void forkexample()
{
	/* child process because return value is zero */
	if(fork() == 0)
		printf("Hello from child!\n");
		
	/* parent  process because return value is non-zero */
	else
		printf("Hello from parent!\n");
}
int main(void)
{
	forkexample();
	return(0);
}