/*
=========================================================
Problem:
Write a C program to determine whether an integer
is prime or not.

DESIGN REQUIREMENT
------------------

Input:
    An integer entered by the user using scanf().

Process:
    1. Get an integer from the user.
    2. Check whether the number is greater than 1.
    3. Use a loop to check whether the number is
       divisible by any number from 2 to number - 1.
    4. If the number is divisible by any value,
       it is not prime.
    5. Otherwise, the number is prime.

Output:
    Display whether the number is prime or not.

Pre-requisites:
    Loops
    Conditional Statements
    Operators


TEST CASES
----------

Input : 2
Output: 2 is prime.

Input : 3
Output: 3 is prime.

Input : 5
Output: 5 is prime.

Input : 4
Output: 4 is not prime.

Input : 6
Output: 6 is not prime.

Input : 1
Output: 1 is not prime.

Input : -5
Output: -5 is not prime.
=========================================================
*/

#ifndef PRIME_H
#define PRIME_H

void check_prime(int number);

#endif