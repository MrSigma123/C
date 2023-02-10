
#include <stdio.h>
// #include <stdlib.h> // for exit(); functionality

void program_work(void);
void repeated_program_work(void);
void print_invite_message(void);
int scan_number_length(void);
char input_the_number_and_find_greatest_digit(int length);
void print_the_greatest_digit(char greatest_digit);
char repeat_the_program_decision(void);
void print_closing_message(char status);

void program_work(void)
{
    print_invite_message();
    int length = scan_number_length();
    char greatest_digit = input_the_number_and_find_greatest_digit(length);
    print_the_greatest_digit(greatest_digit);
    char program_status = repeat_the_program_decision();
    print_closing_message(program_status);
}

void repeated_program_work(void)
{
    int length = scan_number_length();
    char greatest_digit = input_the_number_and_find_greatest_digit(length);
    print_the_greatest_digit(greatest_digit);
    char program_status = repeat_the_program_decision();
    print_closing_message(program_status);
}

void print_invite_message(void)
{
    printf("Hello! :)\n\n");
    printf("This program was created to find a maximum value inside an array.\n");
    printf("We will use for this purpose the telephone number!\n\n");
}

int scan_number_length(void)
{
    int length;

    printf("To start we need to specify the length of your phone number.\n");
    printf("Please enter the amount of the digits in your phone number: ");
    scanf("%d", &length);

    while (length < 9 || length > 13)
    {
        if (length < 9)
        {
            printf("\nOoops... You've typed too little number of digits.\n");
            printf("Please enter the correct phone number format: ");
        }
        else if (length > 13)
        {
            printf("\nOoops... You've typed too big number of digits.\n");
            printf("Please enter the correct phone number format: ");
        }
        scanf("%d", &length);
    }

    return length;
}

char input_the_number_and_find_greatest_digit(int length)
{
    char number[length];
    int i = 0;
    char greatest_digit;

    printf("\nOk, now let's check your phone number!\n");
    printf("Please input your phone number: ");

    while (i < length)  // initialize the array
    {
        scanf(" %c", &number[i]);
        i++;
    }   // i.e. if the number has the length of 9 digits the i variable will be eq. to 9


    i = 0;
    /*
    while (i < length)  // initialize the array
    {
        printf("%c", number[i]);
        i++;
    }
    */
    // fflush(stdin);
    i = 0;  // zeroing the iterator
    greatest_digit = '0';

    while (i < length)
    {
        if (number[i] > greatest_digit)
            greatest_digit = number[i];
        i++;
    }

    return greatest_digit;
}

void print_the_greatest_digit(char greatest_digit)
{
    printf("\nThe greatest digit in that phone number is %c\n", greatest_digit);
}

char repeat_the_program_decision(void)
{
    char decision;

    printf("Would you like to check another phone number? (Press 'Y' or 'N'): ");
    scanf(" %c", &decision);

    return decision;
}

void print_closing_message(char status)
{
    if (status == 'y' || status == 'Y')
    {
        system("cls");
        repeated_program_work();
    }
    else if (status == 'n' || status == 'N')
    {
    printf("\nOk, so that's all for now.\n");
    printf("Thank you for using our program! :)\n");
    }
    else
        printf("Invalid user input... ERROR");
}

int main(void)
{
    program_work();
    return 0;
}
