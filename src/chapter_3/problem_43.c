/*
 * Filename: problem_43.c
 * Project: C Language Workbook Problems
 * Section: Chapter 3
 * Author: Alexander Popp
 * Date created: 05/09/2019
 * Date last modified: 05/09/2019
 * 
 * Description:
 *     Problem #43: Write a program that translates a binary number into hexadecimal.
 *     End of intup is 'Enter' key.
 */


#include <stdio.h>

int main() {
    char input;
    int x = 0, i = 0;
    printf("Enter a binary number >> ");
    while((input = getchar()) != '\n') {
        i++;
        x = x * 2 + (input - '0');
        if(i % 4 == 0) {
            if(x < 10) printf("%d", x);
            else printf("%c", 'A' + x - 10);
            x = 0;
        }
    }
    printf("\n");    
    return 0;
}
