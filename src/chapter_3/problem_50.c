/*
 * Filename: problem_50.c
 * Project: C Language Workbook Problems
 * Section: Chapter 3
 * Author: Alexander Popp
 * Date created: 05/21/2019
 * Date last modified: 05/21/2019
 * 
 * Description:
 *     Problem #50: Write a program that determines the sum S of squares of even
 *     and cubes of odd numbers from N to M.
 */


#include <stdio.h>
#include <math.h>

int main() {
    int n, m, i;
    int sum = 0;

    printf("Enter N >> ");
    scanf("%d", &n);
    printf("Enter M >> ");
    scanf("%d", &m);

    for(i = n; i <= m; i++) {
        if(i % 2 == 0)
            sum += pow(i, 2);
        else
            sum += pow(i, 3);
    }
    printf("Sum of squares of even and qubes of odd numbers from %d to %d is: %d.\n", n, m, sum);
    return 0;
}
