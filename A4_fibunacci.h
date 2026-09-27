/*
=========================================================
Problem:
Write a C program to generate the Fibonacci series
up to a given number of terms.

DESIGN REQUIREMENT
------------------

Input:
    The number of terms entered by the user using scanf().

Process:
    1. Get the number of terms from the user.
    2. Initialize the first two Fibonacci numbers as 0 and 1.
    3. Display the Fibonacci numbers.
    4. Use a loop to calculate the next number.
    5. Each number is calculated by adding the previous
       two numbers.

Output:
    Display the Fibonacci series up to the given number
    of terms.

Pre-requisites:
    Loops
    Variables
    Basic Arithmetic Operations


TEST CASES
----------

Input : 5
Output: 0 1 1 2 3

Input : 7
Output: 0 1 1 2 3 5 8

Input : 1
Output: 0

Input : 2
Output: 0 1

Input : 0
Output: No terms to display.
=========================================================
*/

#ifndef FIBONACCI_H
#define FIBONACCI_H

void generate_fibonacci(int terms);

#endif