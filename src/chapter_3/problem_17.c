/*
 * Filename: problem_17.c
 * Project: C Language Workbook Problems
 * Section: Chapter 3
 * Author: Alexander Popp
 * Date created: 08/29/2018
 * Date last modified: 08/29/2018
 * 
 * Description:
 *     Problem #17: Write a program that determines the greatest common 
 *     divisor of natural numbers M and N.
 */


#include <stdio.h>

int main() {
    int m, n, gcd;
    printf("Enter two numbers >> ");
    scanf("%d%d", &m, &n);
    for (int i = 1; i <= m && i <= n; i++) {
        if (m % i == 0 && n % i == 0) gcd = i;
    }
    printf("GCD[%d, %d] = %d\n", m, n, gcd);
    return 0;
}
