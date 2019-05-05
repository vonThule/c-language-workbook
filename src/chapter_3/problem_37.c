/*
 * Filename: problem_37.c
 * Project: C Language Workbook Problems
 * Section: Chapter 3
 * Author: Alexander Popp
 * Date created: 05/05/2019
 * Date last modified: 05/05/2019
 * 
 * Description:
 *     Problem #37: Write a program that determines the length of the longest
 *     series of letter 'A' in the given text.
 */


#include <stdio.h>

int main() {
    char character;
    int max_length = 0, counter = 0;
    printf("Enter text >> ");
    while((character = getchar()) != EOF) {
        /* EOF - CTRL+D */
        if(character == 'A' || character == 'a') counter++;
        else counter = 0;
        if(counter > max_length) max_length = counter;
    }
    printf("The longest series of letter 'A' is: %d.\n", max_length);
    return 0;
}
