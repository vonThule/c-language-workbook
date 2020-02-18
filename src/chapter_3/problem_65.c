/*
 * Filename: problem_65.c
 * Project: C Language Workbook Problems
 * Section: Chapter 3
 * Author: Alexander Popp
 * Date created: 02/18/2020
 * Date last modified: 02/18/2020
 * 
 * Description:
 *     Problem #65: Write a program that, for the given N, prints out the appropriate figure:
 *     eg: N = 4
 *
 *     ****
 *     ***
 *     **
 *     *
 *
 */


#include <stdio.h>

int main() {
    int n;
    printf("Enter n >> ");
    scanf("%d", &n);
    for (int i = n - 1; i >= 0; i--) {
        for (int j = 0; j <= i; j++) {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
