/*
 * Filename: problem_23.c
 * Project: C Language Workbook Problems
 * Section: Chapter 3
 * Author: Alexander Popp
 * Date created: 08/31/2018
 * Date last modified: 08/31/2018
 * 
 * Description:
 *     Problem #23: Write a program that for a given N, prints out the
 *     appropriate figure:
 * Example:
 *     N = 4
 *     *
 *     **
 *     ***
 *     ****
 */


#include <stdio.h>

int main() {
    int n;
    printf("Enter n >> ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j <= i; j++) {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
