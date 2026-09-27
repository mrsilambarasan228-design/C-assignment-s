/*
=========================================================
Problem:
Write a C program that uses a function to count the
frequency of each digit (0-9) in a given integer.

DESIGN REQUIREMENT
------------------

Input:
    An integer entered by the user using scanf().

Process:
    1. Get an integer from the user.
    2. Create a frequency array of size 10.
    3. Extract each digit from the number using a loop.
    4. Use the extracted digit as an index of the
       frequency array.
    5. Increment the frequency of that digit.
    6. Pass the frequency array to the function using
       a pointer.
    7. Print the frequency of each digit in main().

Output:
    Display how many times each digit (0-9) appears.

Pre-requisites:
    Functions
    Arrays
    Loops
    Pass by Reference (Pointers)


TEST CASES
----------

Input : 122333
Output:
Digit 0: 0
Digit 1: 1
Digit 2: 2
Digit 3: 3

Input : 50505
Output:
Digit 0: 2
Digit 5: 3

Input : 12345
Output:
Digit 0: 0
Digit 1: 1
Digit 2: 1
Digit 3: 1
Digit 4: 1
Digit 5: 1
=========================================================
*/

#ifndef DIGIT_FREQUENCY_H
#define DIGIT_FREQUENCY_H

void count_frequency(int number, int frequency[]);

#endif