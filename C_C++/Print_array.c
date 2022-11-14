#include <stdio.h>

/**
 * main - print "I AM IDIOT"
 * instead of your name
 *
 * Return: Always 0
 */
 
 int main(void)
 {
 	char str[50];
 	char str2[50] = "I AM IDIOT";
 	char str3[50];
 	char *ptr = str;
 	char *ptr2 = str2;
 	char *ptr3 = str3;
 	
 	printf("Enter your name: ");
 	scanf("%s", &str);
 	
 	ptr3 = ptr;
 	ptr2 = ptr;
 	ptr2 = ptr3;
 	
 	printf("The original string: %s\n", str);
 	printf("The replaced string: %s\n", str2);
 	
 	return(0);
 }