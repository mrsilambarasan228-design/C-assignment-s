/*
=========================================================
Problem:
Write a C program that uses a recursive function to find
the GCD of two numbers using the Euclidean algorithm.

DESIGN REQUIREMENT
------------------

Input:
    Two positive integers entered by the user using scanf().

Process:
    1. Get two positive integers from the user.
    2. Pass the two numbers to a recursive function.
    3. Find the remainder using the modulus operator.
    4. Replace the first number with the second number.
    5. Replace the second number with the remainder.
    6. Continue recursively until the remainder becomes 0.
    7. Return the GCD to the main function.

Output:
    Display the GCD of the two numbers.

Pre-requisites:
    Functions
    Recursion
    Modulus Operator


TEST CASES
----------

Input : 48 18
Output: GCD of 48 and 18 is 6.

Input : 20 8
Output: GCD of 20 and 8 is 4.

Input : 15 10
Output: GCD of 15 and 10 is 5.

Input : 7 3
Output: GCD of 7 and 3 is 1.
=========================================================
*/

#ifndef GCD_H
#define GCD_H

int find_gcd(int number1, int number2);

#endif