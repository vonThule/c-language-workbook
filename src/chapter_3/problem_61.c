/*
 * Filename: problem_61.c
 * Project: C Language Workbook Problems
 * Section: Chapter 3
 * Author: Alexander Popp
 * Date created: 06/07/2019
 * Date last modified: 06/07/2019
 * 
 * Description:
 *     Problem #61: Check if elements of a given array of N members form a geometric progression.
 * Note: Array a1, a2, a3,... an, is geometric if the quotient of it's neighbouring members
 *       is constant - ak:ak-1 = d, k = 2,3,... General member of the geometric array bk = b1q^k-1.
 */


#include <stdio.h>

int main() {
    int n, i, ap, d;
    double a1, a2;
    printf("Enter n >> ");
    scanf("%d", &n);
    if (n <= 2) {
        printf("Error: Number 'n' must be greater than 2!\n");
        printf("You have entered %d\n", n);
        return 1;
    }
    printf("Enter element number 1: ");
    scanf("%lf", &a1);
    printf("Enter element number 2: ");
    scanf("%lf", &a2);
    d = (a2 / a1) * 10000;
    for (i = 3; i <= n; i++){
        a1 = a2;
        printf("Enter element number %d: ", i);
        scanf("%lf", &a2);
        if((a2 / a1) * 10000 != d) ap = 0;
    }
    printf("The elements of the given array ");
    if(!ap) printf("do not ");
    printf("make up a geometric progression.\n");
    return 0;
}
