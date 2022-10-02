#include <stdio.h>
int main(void)
{
  int x = 2;
  int y = 2;

  if(x < y)
   // if this condition is true run this block
  {
    printf("x is less than y");
  }
 else if(x > y)
  / / if the above statement was true run this block instead
 { 
    printf("x is greater than y");
 } 
 else  
   // if this block of code runs 
   //it runs because x < y was false 
  //and so was x > y 
  //so it means x == y
 {
    printf("x is equal to y");
 }
}