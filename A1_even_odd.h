/*
=========================================================
Problem:
Write a C program to determine whether an integer
is even or odd.

DESIGN REQUIREMENT
------------------

Input:
    An integer entered by the user using scanf().

Process:
    1. Get an integer from the user.
    2. Check whether the number is perfectly divisible by 2.
    3. If remainder is 0, the number is even.
    4. Otherwise, the number is odd.

Output:
    Display whether the number is even or odd.

Pre-requisites:
    Conditional Statements
    Operators


TEST CASES
----------

Input : 10
Output: 10 is even.

Input : 7
Output: 7 is odd.

Input : -8
Output: -8 is even.

Input : -5
Output: -5 is odd.

Input : 0
Output: 0 is even.
=========================================================
*/

#ifndef EVEN_ODD_H
#define EVEN_ODD_H

void check_even_odd(int number);

#endif