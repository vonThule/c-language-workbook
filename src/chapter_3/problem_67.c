/*
 * Filename: problem_67.c
 * Project: C Language Workbook Problems
 * Section: Chapter 3
 * Author: Alexander Popp
 * Date created: 03/04/2020
 * Date last modified: 03/04/2020
 * 
 * Description:
 *     Problem #67: Write a program that, for the given N, prints out the appropriate figure:
 *     eg: N = 4
 *
 *     *******
 *      *****
 *       ***
 *        *
 *
 */


#include <stdio.h>

int main() {
    int n;
    printf("Enter n >> ");
    scanf("%d", &n);
    for (int i = n - 1; i >= 0; i--) {
        for (int j = 0; j <= n - i; j++) {
            printf(" ");
        }
        for (int k = 1; k <= 2 * i + 1; k++) {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
