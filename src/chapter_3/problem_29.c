/*
 * Filename: problem_29.c
 * Project: C Language Workbook Problems
 * Section: Chapter 3
 * Author: Alexander Popp
 * Date created: 04/14/2019
 * Date last modified: 04/14/2019
 * 
 * Description:
 *     Problem #29: Check whether the elemets in a given array of N members
 *     make up an arithmetical progression.
 *     Note: Array a1, a2, a3,... an,... is arithmetic, if the difference of
 *     it's neighboring members is constant: ak - ak-1 = d, k = 2, 3,...
 *     General member of the arithmetical array ak = a1 + (k - 1)d.
 */


#include <stdio.h>

int main() {
    int n, i, a1, a2, d, ap;
    printf("Enter n >> ");
    scanf("%d", &n);
    if (n < 2) {
        printf("Error: Number 'n' must be greater than 2!\n");
        printf("You have entered %d\n", n);
        return 1;
    }
    printf("Enter element number 1: ");
    scanf("%d", &a1);
    printf("Enter element number 2: ");
    scanf("%d", &a2);
    d = a2 - a1;
    for (i = 3; i <= n; i++){
        a1 = a2;
        printf("Enter element number %d: ", i);
        scanf("%d", &a2);
        if(a2 - a1 != d) ap = 0;
    }
    printf("The elements of the given array ");
    if(!ap) printf("do not ");
    printf("make up an arithmetical progression.\n");
    return 0;
}
