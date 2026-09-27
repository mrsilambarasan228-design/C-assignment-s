/*
=========================================================
Problem:
Write a C program to calculate the factorial of a
positive integer.

DESIGN REQUIREMENT
------------------

Input:
    A positive integer entered by the user using scanf().

Process:
    1. Get an integer from the user.
    2. Initialize factorial as 1.
    3. Use a loop to multiply all integers from 1
       up to the given number.
    4. Display the calculated factorial.

Output:
    Display the factorial of the given number.

Pre-requisites:
    Operators
    Data Types
    Loops


TEST CASES
----------

Input : 5
Output: Factorial of 5 is 120.

Input : 4
Output: Factorial of 4 is 24.

Input : 3
Output: Factorial of 3 is 6.

Input : 1
Output: Factorial of 1 is 1.

Input : 0
Output: Factorial of 0 is 1.
=========================================================
*/

#ifndef FACTORIAL_H
#define FACTORIAL_H

void calculate_factorial(int number);

#endif