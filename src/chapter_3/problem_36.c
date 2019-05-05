/*
 * Filename: problem_36.c
 * Project: C Language Workbook Problems
 * Section: Chapter 3
 * Author: Alexander Popp
 * Date created: 05/05/2019
 * Date last modified: 05/05/2019
 * 
 * Description:
 *     Problem #36: Count the number of words whose first and last
 *     character are equal. Words are separated by: ' ', '\t', '\n'. 
 */


#include <stdio.h>

int main() {
    char character, first, last, rep = ' ';
    int counter = 0;
    printf("Enter text >> ");
    do {
        character = getchar();
        if(character != ' ' && rep == ' ') first = character;
        if((character == ' ' || character == '\t' || character == '\n')  && rep != ' ') {
            last = rep;
            if(first == last) counter++;
        }
        rep = character;
    } while(character != EOF);
    /* EOF - CTRL+D */
    printf("Number of words with same first and last char is: %d.\n", counter);
    return 0;
}
