/*
 * Filename: problem_69.c
 * Project: C Language Workbook Problems
 * Section: Chapter 3
 * Author: Alexander Popp
 * Date created: 11/08/2020
 * Date last modified: 12/08/2020
 * 
 * Description:
 *     Problem #69: Write a program that, for the given N, prints out the appropriate figure:
 *     eg: N = 6
 *
 *       * *
 *      ** **
 *     *** ***
 *     
 *     *** ***
 *      ** **
 *       * *
 *
 */


#include <stdio.h>

int main() {
    int n;
    int i, j, k;
    printf("Enter n >> ");
    scanf("%d", &n);
    for (i = 1; i <= n / 2; i++) {
        for (j = 0; j <= n - i; j++) {
            printf(" ");
        }
        for (k = 0; k < i * 2; k++) {
            printf("*");
            if (k + 1 == i) printf(" ");
            
        }
        printf("\n");
    }
    printf("\n");

    for (i = n / 2; i > 0; i--) {
        for (j = 0; j <= n - i; j++) {
            printf(" ");
        }
        for (k = 0; k < i * 2; k++) {
            printf("*");
            if (k + 1 == i) printf(" ");
        }
        printf("\n");
    }
    return 0;
}
