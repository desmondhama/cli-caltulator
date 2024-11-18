
#include "mathlib.h"
#include <stdio.h>

// Function prototype -> block for aquiring user input Get
void GetUserInput(char operator, int value1, int value2);
//Function prototype--> to perfom logic of calculator
void GiveResultOfCaltulation(int result, char operator, int value1, int value2);

int main() {

  printf(GetUserInput(char operator, int value1, int value2));
  printf(GiveResultOfCaltulation(int result, char operator, int value1, int value2));

}

void GetUserInput(char operator, int value1, int value2) {


  printf("\n");
  printf("***********CLI CALCULATOR***********\n\n");
  printf("Enter value initial value: ");
  scanf("%d", &value1); // ask for the initial valu

  printf("Enter the operator e.g(+,-,*,/) for you math: ");
  scanf(" %c", &operator);

  printf("Enter value2 secondary value: ");
  scanf(" %d", &value2);
}

void GiveResultOfCaltulation(int result, char operator, int value1, int value2) {

if (operator== '+') {

  printf("\tSum is: %d %c %d\n\t= %d\n", value1, operator, value2,
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
