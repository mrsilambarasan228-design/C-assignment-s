#include <stdio.h>
#include "fibonacci.h"

/********* Write a C program to generate the Fibonacci series up to a given number of terms **********/

void generate_fibonacci(int terms)
{
    int first = 0;
    int second = 1;
    int next;
    int i;

    /*
        Example input: 5

        terms = 5

        First Fibonacci number:
        first = 0

        Second Fibonacci number:
        second = 1
    */

    if (terms <= 0)
    {
        printf("No terms to display.\n");

        /*
            Example input: 0

            0 is not a valid number of terms.

            So display:
            No terms to display.
        */
    }
    else if (terms == 1)
    {
        printf("%d\n", first);

        /*
            Example input: 1

            Only one term is required.

            Output:
            0
        */
    }
    else
    {
        printf("%d %d", first, second);

        /*
            First two Fibonacci numbers:

            0 1
        */

        for (i = 3; i <= terms; i++)
        {
            next = first + second;

            /*
                Example input: 5

                First:
                first = 0
                second = 1

                next = 0 + 1
                next = 1
            */

            printf(" %d", next);

            /*
                Update the values for the next calculation.

                first becomes second.
                second becomes next.
            */

            first = second;
            second = next;
        }

        printf("\n");
    }
}

int main()
{
    int terms;

    printf("Enter the number of terms: ");
    scanf("%d", &terms);

    /*
        User gives input using scanf().

        Example:
        Enter the number of terms: 5

        terms = 5
    */

    generate_fibonacci(terms);

    /*
        Function call:

        generate_fibonacci(5)

        The function generates:

        0 1 1 2 3
    */

    return 0;
}