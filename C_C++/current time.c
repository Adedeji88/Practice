#include <stdio.h>
#include <time.h>

int main(void)
{
	time_t t;
	time(&t);
	
	printf("The date and time is %s", ctime(&t));
	return(0);
}