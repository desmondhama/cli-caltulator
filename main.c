#include <stdio.h>

// Declare the functions
char *GetUserInput(char operator, int value1, int value2);
int GiveResultOfCalculation(char operator, int value1, int value2);

int main() {
  char operator= '+'; // Example operator
  int value1 = 10, value2 = 20;

  printf("User Input: %s\n", GetUserInput(operator, value1, value2));
  printf("Calculation Result: %d\n",
         GiveResultOfCalculation(operator, value1, value2));

  return 0;
}

// Define the functions
char *GetUserInput(char operator, int value1, int value2) {
  static char result[100];
  sprintf(result, "%d %c %d", value1, operator, value2);
  return result;
}

int GiveResultOfCalculation(char operator, int value1, int value2) {
  switch (operator) {
  case '+':
    return value1 + value2;
  case '-':
    return value1 - value2;
  case '*':
    return value1 * value2;
  case '/':
    return (value2 != 0) ? value1 / value2 : 0;
  default:
    return 0;
  }
}
