#include <stdio.h>
int main () {
char YourFirstName[40];
char YourAge[30];

    printf("Type your first name and press Enter: \n");

    scanf("%s", YourFirstName);

    printf("Enter your age: \n");

    scanf("%s", YourAge);

    printf("Your first name and age are: %s and %s", YourFirstName, YourAge);

return 0;
}