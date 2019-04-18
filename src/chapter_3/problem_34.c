/*
 * Filename: problem_34.c
 * Project: C Language Workbook Problems
 * Section: Chapter 3
 * Author: Alexander Popp
 * Date created: 04/18/2019
 * Date last modified: 04/18/2019
 * 
 * Description:
 *     Problem #34: Program needs to count the times a certain letter appears
 *     in the given text. The user enters a single letter (small or capital),
 *     and the program should count all the repetitions of the given letter
 *     (small and capital).
 */


#include <stdio.h>

int main() {
    char chars, letter;
    int counter = 0;
    printf("Enter a letter >> ");
    scanf("%c", &letter);
    if(letter >= 'a' && letter <= 'z') letter -= 32;
    while((chars = getchar()) != EOF) {
        /* EOF - CTRL+D */
        if(letter == chars || chars == letter + 32) counter++;
    }
    printf("Number of appearances of letter '%c' is: %d.\n", letter, counter);
    return 0;
}
