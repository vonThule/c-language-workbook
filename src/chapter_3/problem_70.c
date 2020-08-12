/*
 * Filename: problem_70.c
 * Project: C Language Workbook Problems
 * Section: Chapter 3
 * Author: Alexander Popp
 * Date created: 12/08/2020
 * Date last modified: 12/08/2020
 * 
 * Description:
 *     Problem #70: Write a program that, for the given N, prints out the appropriate figure:
 *     eg: N = 7
 *
 *     1234567
 *     2345671
 *     3456712
 *     4567123
 *     5671234
 *     6712345
 *     7123456
 *
 */


#include <stdio.h>

int main() {
    int n, step = 1;
    printf("Enter n >> ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) {
        for (int j = step; j <= n; j++) {
            printf("%d", j);
        }
        for (int k = 1; k < step; k++) {
            printf("%d", k);
        }
        printf("\n");
        step++;
    }
    return 0;
}
