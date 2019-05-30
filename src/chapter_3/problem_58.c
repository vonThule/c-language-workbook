/*
 * Filename: problem_58.c
 * Project: C Language Workbook Problems
 * Section: Chapter 3
 * Author: Alexander Popp
 * Date created: 05/30/2019
 * Date last modified: 05/30/2019
 * 
 * Description:
 *     Problem #58: Write a program that removes the first occurence of
 *     the numeral CF from a given number.
 */


#include <stdio.h>

int main() {
    int number, cf, n1, n2;
    int ch_num = 0, p = 1, done = 1, counter = 0;

    printf("Enter a number >> ");
    scanf("%d", &number);
    printf("Enter digit to remove from number >> ");
    scanf("%d", &cf);

    n1 = n2 = number;
    while(n1) {
        int digit;
        digit = n1 % 10;
        if(digit == cf) counter++;
        n1 /= 10;
    }
    
    do {
        int digit;
        digit = n2 % 10;
        if(digit != cf) {
            ch_num += p * digit;
            p *= 10;
        }
        else if(digit == cf && done != counter) {
            ch_num += p * digit;
            p *= 10;
            done++;
        }
    } while (n2 /= 10);

    printf("Number %d, without first occurence of digit %d, is: %d\n", number, cf, ch_num);
    return 0;
}
