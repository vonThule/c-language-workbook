/*
 * Filename: problem_26.c
 * Project: C Language Workbook Problems
 * Section: Chapter 3
 * Author: Alexander Popp
 * Date created: 08/31/2018
 * Date last modified: 08/31/2018
 * 
 * Description:
 *     Problem #26: Write a program that for a given N, prints out the
 *     appropriate figure:
 * Example:
 *     N = 4
 *        *
 *       * *
 *      * * *
 *     * * * *
 */


#include <stdio.h>

int main() {
    int n;
    printf("Enter n >> ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) {
        for (int j = 0; j <= n - i; j++) {
            printf(" ");
        }
        for (int k = 1; k <= i; k++) {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}
