#include <stdio.h>
#include "digit_frequency.h"

/********* Write a C program to count the frequency of each digit (0-9) **********/

void count_frequency(int number, int frequency[])
{
    int digit;

    /*
        Example input:

        number = 122333

        frequency array:

        frequency[0] = 0
        frequency[1] = 0
        frequency[2] = 0
        frequency[3] = 0
        ...
        frequency[9] = 0
    */

    if (number < 0)
    {
        number = -number;

        /*
            If the user enters a negative number,
            convert it into a positive number.

            Example:

            number = -505

            number = 505
        */
    }

    if (number == 0)
    {
        frequency[0]++;

        /*
            Special case:

            If input is 0,
            digit 0 appears once.
        */
    }

    while (number > 0)
    {
        digit = number % 10;

        /*
            Extract the last digit.

            Example:

            number = 122333

            122333 % 10 = 3

            digit = 3
        */

        frequency[digit]++;

        /*
            Increase the frequency of that digit.

            Example:

            digit = 3

            frequency[3]++;

            So:
            frequency[3] = 1
        */

        number = number / 10;

        /*
            Remove the last digit.

            Example:

            122333 / 10 = 12233

            Next loop checks 3 again.
        */
    }
}

int main()
{
    int number;
    int frequency[10] = {0};
    int i;

    printf("Enter an integer: ");
    scanf("%d", &number);

    /*
        User gives input using scanf().

        Example:
        Enter an integer: 122333

        number = 122333
    */

    count_frequency(number, frequency);

    /*
        Function call:

        count_frequency(number, frequency)

        The frequency array is passed to the function.

        The function directly updates the array.

        Example:

        Input:
        122333

        frequency[1] = 1
        frequency[2] = 2
        frequency[3] = 3
    */

    printf("\nDigit Frequency:\n");

    for (i = 0; i <= 9; i++)
    {
        printf("Digit %d: %d\n", i, frequency[i]);
    }

    return 0;
}