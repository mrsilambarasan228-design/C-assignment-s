#include <stdio.h>
#include "even_odd.h"

/********* Write a C program to determine whether an integer is even or odd **********/

void check_even_odd(int number)
{
    if (number % 2 == 0)
    /*
        Example input: 10

        number = 10
        10 % 2 = 0
        0 == 0 = true

        So go inside if.
    */
    {
        printf("%d is even.\n", number);
    }
    else
    /*
        Example input: 7

        number = 7
        7 % 2 = 1
        1 == 0 = false

        So go inside else.
    */
    {
        printf("%d is odd.\n", number);
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
        Enter an integer: 10

        number = 10
    */

    check_even_odd(number);
    /*
        Function call:

        check_even_odd(10)

        10 % 2 = 0
        0 == 0 = true

        Output:
        10 is even.
    */

    return 0;
}