
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    char symbol;
    printf("This program checks of which kind is the input symbol."
           "Please input any character: ");
    scanf("%c", &symbol);

    if (symbol >= 65 && symbol <= 90)   // We can also use the condition (symbol >= 'A' && symbol <= 'Z')
        printf("The character is the capital letter.\n");
    else if (symbol >= 97 && symbol <= 122) // similarly, we can use instead contidion (symbol >= 'a' && symbol <= 'z')
        printf("The character is the lowercase letter.\n");
    else if (symbol >= 48 && symbol <= 57)  // like previously, we can use instead the condition (symbol >= '0' && symbol <= '9')
        printf("The character is the digit.\n");
    else
        printf("The character is the other kind of symbol (not a letter or a digit).\n\n");

    return 0;
}
