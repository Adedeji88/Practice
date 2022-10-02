#include <stdio.h>
int main(void)
{ 
int  x = 1;
int  y = 2;

if ( x > y)
{
  printf("x is larger than y");
}

else 

{  
  printf("x is less than y");
// Because  x > y is false ,
// this block of code will be executed
// resulting in printing the statement of the else branch
}

}