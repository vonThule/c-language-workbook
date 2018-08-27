/*
 * Filename: problem_08.c
 * Project: C Language Workbook Problems
 * Section: Chapter 3
 * Author: Alexander Popp
 * Date created: 08/27/2018
 * Date last modified: 08/27/2018
 * 
 * Description:
 *     Problem #08: For a given n, calculate the sum of elements
 *     of array: 1, x, x^2, x^3, ..., x^n.
 */


#include <stdio.h>

int main() {
    int n, x;
    int sum = 1, m = 1;
    printf("Enter n >> ");
    scanf("%d", &n);
    printf("Enter x >> ");
    scanf("%d", &x);
	for (int i = 1; i <= n; i++) {
        m *= x;
        sum += m;
    }
    printf("The sum is %d\n", sum);
    return 0;
}
