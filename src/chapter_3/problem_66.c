/*
 * Filename: problem_66.c
 * Project: C Language Workbook Problems
 * Section: Chapter 3
 * Author: Alexander Popp
 * Date created: 02/18/2020
 * Date last modified: 02/18/2020
 * 
 * Description:
 *     Problem #66: Write a program that, for the given N, prints out the appropriate figure:
 *     eg: N = 4
 *
 *     ****
 *      ***
 *       **
 *        *
 *
 */


#include <stdio.h>

int main() {
    int n;
    printf("Enter n >> ");
    scanf("%d", &n);
    for (int i = n; i > 0; i--) {
        for (int j = 0; j <= n - i; j++) {
            printf(" ");
        }
        for (int k = 0; k < i; k++) {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
