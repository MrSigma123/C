/* Assuming the following output data:
  
  Choose one of the following options:
  1) copying files        2) transfering files
  3) removing files       4) end
  Enter the number corresponding to desired option: 

  a) Write a function which displays the menu with
  four options (it should look like like above)

  b) Write a function which takes two arguments,
  the lower and the upper limit of the range,
  their type should be int. The function should take from the input
  one integer value. If the value doesn't fit into the range
  the function should display again the menu (using menu
  function from a) and take the new value. In case of entering
  the number in range the function should return it to the calling
  function. Entering non digit value should case returning 4

  c) Write dummy program which uses the functions from a) and b)
  from the current question. The dummy program means that the program
  doesn't truely have to perform all the tasks which are mentioned in
  menu. The program should just display all options and take the value
  entered by the user.
  */

#include <stdio.h>

void menu(void);
int choice(int lowLim, int highLim);

int main(void) {
  int low, high, value;
  menu();
  printf("Enter the lower limit: ");
  scanf("%d", &low);
  printf("Enter the upper limit: ");
  scanf("%d", &high);
  value = choice(low, high);
  printf("The returned value is %d.\n", value);
  return 0;
}

void menu (void) {
  printf("\nChoose one of the following options:\n");
  printf("1) copying files        2) transfering files\n");
  printf("3) removing files       4) end\n");
  printf("Enter the number corresponding to desired option:\n");
}

int choice (int lowLim, int highLim) {
  int test_value;
  printf("\nEnter the value to check if it fits in range: ");
  while (scanf("%d", &test_value) == 1) {
    if (test_value >= lowLim && test_value <= highLim) {
      return test_value;
    }
    else {
      menu();
      printf("\nEnter the value to check if it fits in range: ");
    }
  }
  return 4; // for non numerical test_value
}
