/* Computing the income tax paid by an employee */
#include <stdio.h>
int main(void)
{
    float tax_amt;

    printf("Enter the amount of tax paid: ");
    scanf("%f", &tax_amt);

    if((tax_amt >= 2.5) && (tax_amt <= 5.0))
    {
        printf("Income tax paid is 5 per cent", tax_amt);
    }
    else if((tax_amt >= 5.0) && (tax_amt <= 10.0))
    {
        printf("Income tax paid is 20 per cent", tax_amt);
    }
    else
    {
        printf("Income tax paid is 30 per cent", tax_amt);
    }
    return(0);
}