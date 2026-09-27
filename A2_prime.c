#include <stdio.h>
#include "prime.h"

/********* Write a C program to determine whether an integer is prime or not **********/

void check_prime(int number)
{
    int i;
    int is_prime = 1;

    /*
        Example input: 5

        number = 5

        First check whether number is less than 2.

        Prime numbers must be greater than 1.
    */

    if (number < 2)
    {
        is_prime = 0;

        /*
            Example:

            number = 1

            1 is less than 2.

            So:
            is_prime = 0

            Therefore, 1 is not prime.
        */
    }
    else
    {
        /*
            Check divisors from 2 to number - 1.

            Example input: 5

            i = 2
            i = 3
            i = 4

            We check whether 5 is perfectly
            divisible by any of these numbers.
        */

        for (i = 2; i < number; i++)
        {
            if (number % i == 0)
            /*
                Example input: 6

                First loop:
                i = 2

                6 % 2 = 0
                0 == 0 = true

                So 6 is divisible by 2.

                Therefore, 6 is not prime.
            */
            {
                is_prime = 0;

                break;
                /*
                    No need to check further.

                    We already found a divisor.

                    So exit from the loop.
                */
            }
        }
    }

    if (is_prime == 1)
    {
        printf("%d is prime.\n", number);

        /*
            Example input: 5

            5 % 2 = 1
            5 % 3 = 2
            5 % 4 = 1

            No divisor found.

            is_prime = 1

            Output:
            5 is prime.
        */
    }
    else
    {
        printf("%d is not prime.\n", number);

        /*
            Example input: 4

            4 % 2 = 0

            Divisor found.

            is_prime = 0

            Output:
            4 is not prime.
        */
    }
}

int main()
{
    int number;

    printf("Enter an integer: ");
    scanf("%d", &number);
    /*
        User gives input using scanf().

        Example:
        Enter an integer: 5

        number = 5
    */

    check_prime(number);
    /*
        Function call:

        check_prime(5)

        The function checks whether 5 is prime.

        5 is divisible only by 1 and 5.

        Output:
        5 is prime.
    */

    return 0;
}