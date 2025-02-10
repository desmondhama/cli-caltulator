#include <stdio.h>
#include <signal.h>


/* # FUNCTIONS # */
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
                        printf("ERROR: Invalid Operator!\n");
                        printf("Valid options are: +, -, *, /.");
                        return 0;
        }
}


/* # MAIN FUNCTION # */
int main() {

        /* # VARIABLES # */
        char operator = '+'; // Example operator
        int value1 = 10, value2 = 20;
        int running = 1;

        /* # WHILE LOOP # */
        while (running == 1) {
                /* # GETTING INPUT # */
                printf("Enter First Number, Please!\n");
                scanf("%d", &value1);
                printf("Enter Operator, Please!\n");
                scanf(" %c", &operator);
                printf("Enter Second Number, Please!\n");
                scanf("%d", &value2);

                /* # PROVIDING CALCULATION RESULT # */
                printf("User Input: %s\n", GetUserInput(operator, value1, value2));
                printf("Calculation Result: %d\n\n", GiveResultOfCalculation(operator, value1, value2));
        }

        return 0;
}
