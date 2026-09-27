#include <stdio.h>
#include "gcd.h"

/********* Write a C program that uses a recursive function to find the GCD of two numbers **********/

int find_gcd(int number1, int number2)
{
    /*
        Euclidean Algorithm:

        GCD(a, b) = GCD(b, a % b)

        The function keeps calling itself
        until number2 becomes 0.
    */

    if (number2 == 0)
    {
        return number1;

        /*
            Base condition:

            When number2 becomes 0,
            number1 is the GCD.

            Example:

            GCD(6, 0)

            return 6;
        */
    }

    return find_gcd(number2, number1 % number2);

    /*
        Recursive function call.

        Example:

        find_gcd(48, 18)

        48 % 18 = 12

        Next:
        find_gcd(18, 12)

        18 % 12 = 6

        Next:
        find_gcd(12, 6)

        12 % 6 = 0

        Next:
        find_gcd(6, 0)

        number2 == 0

        return 6;
    */
}

int main()
{
    int number1;
    int number2;
    int gcd;

    printf("Enter two positive integers: ");
    scanf("%d %d", &number1, &number2);

    /*
        User gives two inputs using scanf().

        Example:
        Enter two positive integers: 48 18

        number1 = 48
        number2 = 18
    */

    gcd = find_gcd(number1, number2);

    /*
        Function call:

        find_gcd(48, 18)

        The recursive function calculates:

        48 % 18 = 12
        18 % 12 = 6
        12 % 6 = 0

        Therefore:

        GCD = 6
    */

    printf("GCD of %d and %d is %d.\n",
           number1, number2, gcd);

    return 0;
}