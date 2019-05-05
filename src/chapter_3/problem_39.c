/*
 * Filename: problem_39.c
 * Project: C Language Workbook Problems
 * Section: Chapter 3
 * Author: Alexander Popp
 * Date created: 05/05/2019
 * Date last modified: 05/05/2019
 * 
 * Description:
 *     Problem #39: Write a program the encrypts the given input
 *     by changing places of the neighbouring letters (all characters
 *     change except '\n').
 * Example: Popeye becomes oPepey.
 */


#include <stdio.h>

int main() {
    char character_n = EOF, character_p = EOF;
    printf("Enter text >> ");
    while((character_n = getchar()) != EOF) {
        /* EOF - CTRL+D */
        if(character_n == '\n') {
            putchar(character_p);
            putchar(character_n);
            character_p = EOF;
            continue;
        }
        if(character_p == EOF) character_p = character_n;
        else {
            putchar(character_n);
            putchar(character_p);
            character_p = EOF;
        }
    }
    printf("\n");
    return 0;
}
