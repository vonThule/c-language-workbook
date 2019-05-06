/*
 * Filename: problem_41.c
 * Project: C Language Workbook Problems
 * Section: Chapter 3
 * Author: Alexander Popp
 * Date created: 05/06/2019
 * Date last modified: 05/06/2019
 * 
 * Description:
 *     Problem #41: Test whether the number is even or not
 *     without using '+', '-', '*', '/', '%'.
 */


#include <stdio.h>

int main() {
    int number;
    printf("Enter number >> ");
    scanf("%d", &number);
    printf("Number %d is ", number);
    if(number & 1) printf("odd.\n");
    else printf("even.\n");
    return 0;
}
