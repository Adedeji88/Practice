#include<stdio.h>

int main()
{
    /*Program By Ghanendra Yadav
    Visit http://www.programmingwithbasics.com/
    */
    float b,h,area;

    printf("Enter Height and Base Of Triangle : ");
    scanf("%f and %f",&h,&b);

    area = (h*b)/2;
    printf("Area of Triangle is: %f\n",area);
    return 0;
}