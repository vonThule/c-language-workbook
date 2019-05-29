/*
 * Filename: problem_55.c
 * Project: C Language Workbook Problems
 * Section: Chapter 3
 * Author: Alexander Popp
 * Date created: 05/29/2019
 * Date last modified: 05/29/2019
 * 
 * Description:
 *     Problem #55: Write a program that calculates n!!.
 */


#include <stdio.h>

int main() {
    int n, i;
    int d_fact = 1;

    printf("Enter an integer >> ");
    scanf("%d", &n);

    if(n % 2 == 0)
        for(i = 1; i <= n / 2; i++) 
            d_fact *= (2 * i);
    else 
        for (i = 1; i <= (n + 1) / 2; i++)
            d_fact *= (2 * i - 1);

    printf("Double factorial of %d is: %d.\n", n, d_fact);
    return 0;
}
