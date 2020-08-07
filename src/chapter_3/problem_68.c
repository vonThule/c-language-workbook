/*
 * Filename: problem_67.c
 * Project: C Language Workbook Problems
 * Section: Chapter 3
 * Author: Alexander Popp
 * Date created: 07/08/2020
 * Date last modified: 08/08/2020
 * 
 * Description:
 *     Problem #67: Write a program that, for the given N, prints out the appropriate figure:
 *     eg: N = 7
 *
 *     *******
 *     *     *
 *     * *** *
 *     * *** *
 *     * *** *
 *     *     *
 *     *******
 *
 */


#include <stdio.h>

int main() {
    int n;
    printf("Enter n >> ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            if ((i == 1 || i == n || j == 1 || j == n) ||
                    (i >= 3 && i <= n - 2 && j >= 3 && j <= n - 2)) {
                printf("*");
            } else {
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}
