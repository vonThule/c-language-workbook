/*
 * Filename: problem_13.c
 * Project: C Language Workbook Problems
 * Section: Chapter 3
 * Author: Alexander Popp
 * Date created: 08/28/2018
 * Date last modified: 08/28/2018
 * 
 * Description:
 *     Problem #13: Print out first N numbers that have the following
 *     property: while divided by 2 or 6, the numbers should give a mod
 *     of 1 and be divisible by 7.
 */


#include <stdio.h>

int main() {
    int n;
    printf("Enter n >> ");
    scanf("%d", &n);
    for(int i = 1; i <= n; i++) {
        if((i % 2 == 1 || i % 6 == 1) && i % 7 == 0)
            printf("Number: %4d\n", i);
    }
    return 0;
}
