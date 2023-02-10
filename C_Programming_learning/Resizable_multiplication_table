#include <stdio.h>
#include <stdlib.h>

// let's create a program which will render the basic multiplication table

int main(void)
{
    printf("This program prints the multiplication table sized by user input values.\n"
           "Please enter the desired dimensions of the table,\nfirstly the widtth: ");

    int width;
    scanf("%d", &width);

    printf("now the height: ");

    int height;
    scanf("%d", &height);

    printf("\nOK, Here is the multiplication table with your desired size:\n\n");

    int i, j;
    for (i = 1; i <= height; i++)
    {
        for (j = 1; j <= width; j++)
            printf("%4.d", j*i);
        printf("\n");
    }
    return 0;
}
