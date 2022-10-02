#include <stdio.h>
int main(void)
{
	int i = 0;

	while(i < 3) {
	//while i is less than 10 run this code
		printf("%d\n", i); // and then increment
		i++; //check the condition everytime
            //once the code in the curly braces is run, check if i is still less than 10.
           // If so run code + increment again and check again
	      //loop will eventually end when i reaches 10
	}
return 0;
}