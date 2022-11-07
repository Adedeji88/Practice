#include <stdio.h>
#include <string.h>
/*
* main - converts a string to integer
*
* Return: Always 0
*/
int main(void)
{
	char str1[] = "Hello";
	char str2[] = "The man";
	int val1, val2;
	
	val1 = atoi(str1);
	printf("String value = %s\n", str1);
	printf("Integer value = %d\n", val1);
	
	val2 = atoi(str2);
	printf("String value = %s\n", str2);
	printf("Integer value = %d\n", val2);
	
	return(0);
}