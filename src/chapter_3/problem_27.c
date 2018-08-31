/*
 * Filename: problem_27.c
 * Project: C Language Workbook Problems
 * Section: Chapter 3
 * Author: Alexander Popp
 * Date created: 08/31/2018
 * Date last modified: 08/31/2018
 * 
 * Description:
 *     Problem #27: Write a program that for a given N, prints out the
 *     appropriate figure:
 * Example:
 *     N = 4
 *     * * * *
 *      * * * *
 *     * * * *
 *      * * * *
 */


#include <stdio.h>

int main() {
    int n;
    printf("Enter n >> ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        if (i % 2 != 0) printf(" ");
        for (int j = 0; j <= n; j++) {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}
