// This program will check, if the input numbers into an array have at least
// a pair of "neighbours numbers"

#include <stdio.h>

int main(void)
{
    int size, i;
    int flag = 0;
    
    // GOOD NEIGHBOURS NUMBERS - in this exercise means if a multiplied pair of the numbers
    // gives the result number between these two previous numbers in an array order
    
    printf("Hello!\n\n");
    printf("This program checks, if the array of numbers involve a \"good neighbours\" numbers\n");
    printf("Please, specify how many digits you want to enter (type the number): ");
    scanf("%d", &size);
    
    if (size < 3)
    {
        printf("\nThe size of an array is too small to clarify, if the array has inside\n");
        printf("at least a pair of \"good neighbours\" numbers\n");
        printf("(the array has to have at least 3 elements).\n");
        
        while (size < 3)
        {
            printf("\nPlease, enter the proper number of elements in array.\n");
            printf("(try input the number again): ");
            scanf("%d", &size);
        }
    }
    
    int array[size];
    printf("\nThe number of the elements in an array is correct!\n\n");
    
    // scan the values into array
    printf("Now please input the numbers, which will be stored in the array.\n");
    for (i = 0; i < size; i++)
    {
        printf("Enter the number No.%d: ", i + 1);
        scanf("%d", &array[i]);
    }
    
    // determine if the array have at least one pair of "good neighbours" numbers
    for (i = 1; i < size; i++)
    {
        if (array[i - 1] * array[i + 1] == array[i + 1])
        {
            flag = 1;   // the flag will help us to print informative closing message
            break;
        }
    }
    
    if (flag == 1)
        printf("\nThis array have \"good neighbours\" numbers.\n\n");
    
    else if (flag == 0)
        printf("\nThis array don't have \"good neighbours numbers\n\n");
    
    return 0;
}
