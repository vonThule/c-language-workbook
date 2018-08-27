/*
 * Filename: problem_05.c
 * Project: C Language Workbook Problems
 * Section: Chapter 3
 * Author: Alexander Popp
 * Date created: 08/27/2018
 * Date last modified: 08/27/2018
 * 
 * Description:
 *     Problem #05: Write a program that calculates the n!.
 * Note:
 *     - if n = 0, then n! = 1,
 *     - if n >= 1, then n! = n(n - 1)...1
 */


#include <stdio.h>

int main() {
    int n;
    int n_fact = 1;
    printf("Enter n >> ");
    scanf("%d", &n);
	if (n == 0) n_fact = 1;
    else if (n >= 1) {
        for (int i = 1; i <= n; i++) n_fact *= i;
    }
    printf("%d! = %d\n", n, n_fact);
    return 0;
}
