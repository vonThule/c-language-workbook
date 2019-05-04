/*
 * Filename: problem_35.c
 * Project: C Language Workbook Problems
 * Section: Chapter 3
 * Author: Alexander Popp
 * Date created: 05/04/2019
 * Date last modified: 05/04/2019
 * 
 * Description:
 *     Problem #35: Write a program that counts the number of words
 *     in the given text. Words are separated by: ' ', '\t', '\n'.
 */


#include <stdio.h>

int main() {
    char character, rep = ' ';
    int counter = 0;
    printf("Enter text >> ");
    while(( character = getchar()) != EOF) {
        /* EOF - CTRL+D */
        if((character == ' ' || character == '\t' || character == '\n')  && rep != ' ') {
            counter++;
            rep = ' ';
        }
        else rep = character;
    }
    if (rep != ' ') counter++;
    printf("Number of words in the given text is: %d.\n", counter);
    return 0;
}
