/*
 * Filename: problem_42.c
 * Project: C Language Workbook Problems
 * Section: Chapter 3
 * Author: Alexander Popp
 * Date created: 05/08/2019
 * Date last modified: 05/08/2019
 * 
 * Description:
 *     Problem #42: Given an 8-bit binary number, print out it's base10 equivalent.
 */


#include <stdio.h>

int main() {
    char input;
    int x = 0;
    printf("Enter an 8-bit binary number >> ");
    while((input = getchar()) != '\n') {
        x = x * 2 + (input - '0');
    }
    printf("It's base10 equivalent is %d.\n", x);    
    return 0;
}
