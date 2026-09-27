#include <stdio.h>
#include "factorial.h"

/********* Write a C program to calculate the factorial of a positive integer **********/

void calculate_factorial(int number)
{
    int i;
    int factorial = 1;

    /*
        Example input: 5

        number = 5

        Initially:
        factorial = 1

        We multiply factorial with
        each number from 1 to 5.
    */

    for (i = 1; i <= number; i++)
    {
        factorial = factorial * i;

        /*
            Example input: 5

            First loop:
            i = 1
            factorial = 1 * 1
            factorial = 1

            Second loop:
            i = 2
            factorial = 1 * 2
            factorial = 2

            Third loop:
            i = 3
            factorial = 2 * 3
            factorial = 6

            Fourth loop:
            i = 4
            factorial = 6 * 4
            factorial = 24

            Fifth loop:
            i = 5
            factorial = 24 * 5
            factorial = 120
        */
    }

    printf("Factorial of %d is %d.\n", number, factorial);

    /*
        Example:

        number = 5
        factorial = 120

        Output:
        Factorial of 5 is 120.
    */
}

int main()
{
    int number;

    printf("Enter a positive integer: ");
    scanf("%d", &number);
    /*
        User gives input using scanf().

        Example:
        Enter a positive integer: 5

        number = 5
    */

    calculate_factorial(number);
    /*
        Function call:

        calculate_factorial(5)

        The function calculates:

        1 x 2 x 3 x 4 x 5 = 120

        Output:
        Factorial of 5 is 120.
    */

    return 0;
}