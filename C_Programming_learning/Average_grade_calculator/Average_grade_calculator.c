#include <stdlib.h>
#include <stdio.h>

int main(void)
{
    float number;
    float average = 0;
    int num_count = 0;    // iteration number as well

    printf("This program calculates the average grade depending of input values.\n"
           "If you want to calculate te average please enter the -1 number.\n"
           "Please input as many grades you want: ");

    scanf("%f", &number);
    while (number != -1)
    {
        num_count++;
        average += number;
        scanf("%f", &number);
    }

    if (num_count != 0)
    {
        average = average / num_count;
        printf("\nYou've entered %d grades and their average is %.2f\n\n", num_count, average);
    }
    else
        printf("You have entered %d numbers.");

    return 0;
}
