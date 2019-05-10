/*
 * Filename: problem_45.c
 * Project: C Language Workbook Problems
 * Section: Chapter 3
 * Author: Alexander Popp
 * Date created: 05/10/2019
 * Date last modified: 05/10/2019
 * 
 * Description:
 *     Problem #45: Write a program that converts a number from the N-based system
 *     into a 10-base system.
 */


#include <stdio.h>

int main() {
    char input;
    int base, x = 0;
    printf("Enter base from which to convert >> ");
    scanf("%d", &base);
    printf("Enter number to convert >> ");
    while(getchar() != '\n');
    while((input = getchar()) != '\n') {
        if(input <=  '9') x = x * base + input - '0';
        else x = x * base + input - 'A' + 10;
    }
    printf("Given number in base10 is: %d.\n", x);    
    return 0;
}
