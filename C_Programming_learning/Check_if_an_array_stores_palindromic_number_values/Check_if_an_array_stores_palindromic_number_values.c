// Let's check if an array has inside palindromic values

#include <stdio.h>

void palindromic_check(void);

void palindromic_check(void)
{
    int i;   // for loop usage
    int size;
    int decrementation = 1;
    int flag = 1;   // assuming the array has palindromic elements
    
    printf("This program will check if the input values will create palindromic expression.\n");
    printf("Please enter the number of the expression elements: ");
    scanf("%d", &size);
    
    int array[size];    // creating the array of desired size
    
    printf("\nOK, now please input the array elements:\n");
    
    for (i = 0; i < size; i++)
    {
        scanf(" %d", &array[i]);
    }
    for (i = 0; i <= size/2; i++)
    {
        if (array[i] != array[size - decrementation])
        {
            printf("It's not a palindromic expression\n");
            flag = 0;
            break;
        }
        decrementation++;
    }
    
    if (flag == 1)
        printf("This array stores palindromic values\n");
}

int main(void)
{
    palindromic_check();
    return 0;
}
