
#include "mathlib.h"
#include <stdio.h>

int main() {

  /*const char operators[] = {'+', '-', '*', '/'};*/
  char operator; // expets a operator feom the user
  int value1, value2;
  //
  printf("\n");
  printf("***********CLI CALCULATOR***********\n\n");
  printf("Enter value initial value: ");
  scanf("%d", &value1); // ask for the initial value

  printf("Enter the operator e.g(+,-,*,/) for you math: ");
  scanf(" %c", &operator);

  printf("Enter value2 secondary value: ");
  scanf(" %d", &value2);

  int result;

  if (operator== '+') {

    printf(
        "\tSum is: %d %c %d\n\t= %d\n", value1, operator, value2,
        result = Sum(
            value1,
            value2)); // if evaulated to true then the code block gets exetuted
  } else if (operator== '-') {

    printf("\tSubtraction is: %d %c %d\n\t= %d\n", value1, operator, value2,
           result = Subtract(value1, value2));
  } else if (operator== '*' || operator== L'×') {

    printf("Multiplication is %d %c %d\n\t= %d\n", value1, operator, value2,
           result = Multiply(value1, value2));
  } else if (operator== '/' || operator== L'÷') {

    printf("Division is %d %c %d\n\t= %d\n", value1, operator, value2,
           result = Divide(value1, value2));
  } else {
    printf("You have entered incorrect values please try again\n\n");
  }
}
