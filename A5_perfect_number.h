/*
=========================================================
Problem:
Write a C program that uses a function to check whether
a given number is a Perfect Number.

DESIGN REQUIREMENT
------------------

Input:
    A positive integer entered by the user using scanf().

Process:
    1. Get a positive integer from the user.
    2. Find all proper divisors of the number.
    3. Add all proper divisors.
    4. Compare the sum with the original number.
    5. If the sum is equal to the original number,
       the number is a perfect number.
    6. Otherwise, it is not a perfect number.

Output:
    Display whether the number is perfect or not.

Pre-requisites:
    Functions
    Loops
    Return Values


TEST CASES
----------

Input : 6
Output: 6 is a perfect number.

Input : 28
Output: 28 is a perfect number.

Input : 10
Output: 10 is not a perfect number.

Input : 1
Output: 1 is not a perfect number.
=========================================================
*/

#ifndef PERFECT_NUMBER_H
#define PERFECT_NUMBER_H

int check_perfect(int number);

#endif