#include <stdio.h>
#include "perfect_number.h"

/********* Write a C program that uses a function to check whether a given number is a Perfect Number **********/

int check_perfect(int number)
{
    int i;
    int sum = 0;

    /*
        Example input: 6

        number = 6
        sum = 0

        We need to find the proper divisors of 6.

        Proper divisors of 6:
        1, 2, 3

        We do not include 6 itself.
    */

    if (number <= 1)
    {
        return 0;

        /*
            Example:

            number = 1

            1 has no proper divisors.

            Therefore, 1 is not a perfect number.

            return 0 means:
            NOT PERFECT
        */
    }

    for (i = 1; i < number; i++)
    {
        /*
            Check every number from 1
            up to number - 1.
        */

        if (number % i == 0)
        /*
            Check whether i is a divisor.

            Example input: 6

            i = 1
            6 % 1 = 0
            So 1 is a divisor.

            i = 2
            6 % 2 = 0
            So 2 is a divisor.

            i = 3
            6 % 3 = 0
            So 3 is a divisor.
        */
        {
            sum = sum + i;

            /*
                For number = 6:

                sum = 0 + 1 = 1
                sum = 1 + 2 = 3
                sum = 3 + 3 = 6
            */
        }
    }

    if (sum == number)
    /*
        Example:

        sum = 6
        number = 6

        6 == 6 → true

        Therefore, 6 is a perfect number.
    */
    {
        return 1;

        /*
            return 1 means:
            PERFECT NUMBER
        */
    }
    else
    {
        return 0;

        /*
            return 0 means:
            NOT A PERFECT NUMBER
        */
    }
}

int main()
{
    int number;
    int result;

    printf("Enter a positive integer: ");
    scanf("%d", &number);

    /*
        User gives input using scanf().

        Example:
        Enter a positive integer: 6

        number = 6
    */

    result = check_perfect(number);

    /*
        Function call:

        check_perfect(6)

        Proper divisors:

        1 + 2 + 3 = 6

        Since:
        sum == number

        Function returns 1.

        result = 1
    */

    if (result == 1)
    {
        printf("%d is a perfect number.\n", number);
    }
    else
    {
        printf("%d is not a perfect number.\n", number);
    }

    return 0;
}