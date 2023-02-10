#include <stdio.h>

int main(void)
{
    int grade;

    printf("Hello, please enter a valid grade (in a range from 0 to 100)\n");
    printf("or type -1 to end the program: ");

    do
    {
        scanf("%d", &grade);
        printf("\n");
        if (grade >= 0 && grade <= 100)
        {
            printf("Thank you. The input value is valid.\n");
            printf("You've entered %d.\n", grade);
            printf("Please enter another grade or type -1 to finish: ");
        }
        else if (grade < 0 && grade != -1 || grade > 100)
        {
        printf("You've entered invalid input, try again: ");
        }
        if (grade == -1)
        {
            printf("You typed down -1, the program will stop.\n");
            break;
        }
    } while (grade != -1);

    return 0;
}
