/*
 * Filename: problem_33.c
 * Project: C Language Workbook Problems
 * Section: Chapter 3
 * Author: Alexander Popp
 * Date created: 04/17/2019
 * Date last modified: 04/17/2019
 * 
 * Description:
 *     Problem #33: Write a program that determines the number of empty spaces,
 *     dots, and interpunction signs (,;:!?) in the given text.
 */


#include <stdio.h>

int main() {
    char chars;
    int spaces = 0, dots = 0, interp = 0;
    printf("Enter text >> ");
    while((chars = getchar()) != EOF) {
        /* EOF - CTRL+D */
        switch(chars) {
            case ' ': case '\t':
                spaces++;
                break;
            case '.':
                dots++;
                break;
            case ',': case ';': case ':': case '!': case '?':
                interp++;
                break;
        }
    }
    printf("Number of empty spaces: %d,\n", spaces);
    printf("Number of dots: %d,\n", dots);
    printf("Number of interpunction signs: %d.\n", interp);
    return 0;
}
