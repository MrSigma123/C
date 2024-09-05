/*
Write a program which initialize two-dimensional array which size is 3*5 and
which stores the double type elements and uses the VLA function to copy the
data into another two-dimensional array. Write also another VLA using function
which allows for displaying the content of the both arrays. The functions
should operate on N*M arrays. (If your compiler doesn't allow for VLA arrays
use instead traditional C programming ways and do the exercise for N*5 array).
*/
#include <stdio.h>
#include <stdlib.h>

void double_VLA_array_copy(int size1, int size2, double *source, double *destination);
void print_VLA_2d_array(int size1, int size2, double *array);

int main(void)
{
    double array[3][5] = {
        {1, 2, 3, 4, 5},
        {6, 7, 8, 9, 10},
        {11, 12, 13, 14, 15}
    };
    int size1 = 3, size2 = 5; // Fixed sizes for the example
    double *copied_array = (double *)malloc(size1 * size2 * sizeof(double)); // Dynamically allocate memory for copied array

    if (copied_array == NULL)
    {
        printf("Memory allocation failed\n");
        return 1;
    }

    // Copy array elements
    double_VLA_array_copy(size1, size2, (double *)array, copied_array);

    // Print original and copied arrays
    printf("Original array:\n");
    print_VLA_2d_array(size1, size2, (double *)array);

    printf("\nCopied array:\n");
    print_VLA_2d_array(size1, size2, copied_array);

    // Free allocated memory
    free(copied_array);
    return 0;
}

void double_VLA_array_copy(int size1, int size2, double *source, double *destination)
{
    int i, j;
    for (i = 0; i < size1; i++)
    {
        for (j = 0; j < size2; j++)
        {
            destination[i * size2 + j] = source[i * size2 + j]; // Copy each element
        }
    }
}

void print_VLA_2d_array(int size1, int size2, double *array)
{
    int i, j;
    for (i = 0; i < size1; i++)
    {
        for (j = 0; j < size2; j++)
        {
            printf("%lf ", array[i * size2 + j]); // Print each element
        }
        printf("\n");
    }
}

