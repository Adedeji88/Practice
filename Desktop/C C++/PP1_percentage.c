#include <stdio.h>

int main() {
float score, percentage;
int total = 70;

    printf("Type the score of a subject: \n");
    scanf("%f", score);

    percentage = (score/total) * 100;
    printf("Percentage of a subject is: %f", percentage);
 
    return 0;
}
