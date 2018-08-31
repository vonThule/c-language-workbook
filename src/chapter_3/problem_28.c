/*
 * Filename: problem_28.c
 * Project: C Language Workbook Problems
 * Section: Chapter 3
 * Author: Alexander Popp
 * Date created: 08/31/2018
 * Date last modified: 08/31/2018
 * 
 * Description:
 *     Problem #28: Write a program that for a given N, prints out the
 *     appropriate figure:
 * Example:
 *     N = 4
 *     ****
 *     *  *
 *     *  *
 *     ****
 */


#include <stdio.h>

int main() {
    int n;
    printf("Enter n >> ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            if (i == 1 || i == n || j == 1 || j == n) printf("*");
            else printf(" ");
        }
        printf("\n");
    }
    return 0;
}
