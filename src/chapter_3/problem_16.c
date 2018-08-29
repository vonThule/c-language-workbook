/*
 * Filename: problem_16.c
 * Project: C Language Workbook Problems
 * Section: Chapter 3
 * Author: Alexander Popp
 * Date created: 08/29/2018
 * Date last modified: 08/29/2018
 * 
 * Description:
 *     Problem #16: Write a program that removes every occurence of
 *     digit CF from the given number.
 */


#include <stdio.h>

int main() {
    int number, cf, n, digit;
    int ch_num = 0, p = 1;
    printf("Enter a numbers >> ");
    scanf("%d", &number);
    printf("Enter digit to remove from number >> ");
    scanf("%d", &cf);
    n = number;
    do {
        digit = n % 10;
        if(digit != cf) {
            ch_num += p * digit;
            p *= 10;
        }
    } while (n /= 10);
    printf("Number %d, without digit %d, is: %d\n", number, cf, ch_num);
    return 0;
}
