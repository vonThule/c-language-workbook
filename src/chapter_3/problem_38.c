/*
 * Filename: problem_38.c
 * Project: C Language Workbook Problems
 * Section: Chapter 3
 * Author: Alexander Popp
 * Date created: 05/05/2019
 * Date last modified: 05/05/2019
 * 
 * Description:
 *     Problem #38: Write a program that encrypts the given input
 *     with a Ceasar cypher.
 * Note: Whitespaces and interpunction remain unchanged.
 * Example: Letter A becomes letter D (shift by three).
 */


#include <stdio.h>

int main() {
    char input;
    printf("Enter text >> ");
    while((input = getchar()) != EOF) {
        /* EOF - CTRL+D */
        if(input >= 'A' && input <= 'Z') {
            putchar('A' + (input - 'A' + 3) % 26);
        }
        else if (input >= 'a' && input <= 'z') {
            putchar('a' + (input - 'a' + 3) % 26);
        }
    }
    printf("\n");
    return 0;
}
