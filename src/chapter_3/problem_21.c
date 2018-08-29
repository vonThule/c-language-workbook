/*
 * Filename: problem_21.c
 * Project: C Language Workbook Problems
 * Section: Chapter 3
 * Author: Alexander Popp
 * Date created: 08/29/2018
 * Date last modified: 08/29/2018
 * 
 * Description:
 *     Problem #21: For a given number N, print out all Pytaghorean
 *     numbers a, b and c, where a and b range from 1 to N.
 * Note: 
 *     Numbers are Pytagorhean if: a^2 + b^2 = c^2.
 */


#include <stdio.h>
#include <math.h>

int main() {
    int n;
    double c;
    printf("Enter number >> ");
    scanf("%d", &n);
    printf("%7c %7c %7c\n\n", 'a', 'b', 'c');
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            c = sqrt(pow(i, 2) + pow(j, 2));
            if(ceil(c) == c) {
                printf("%7d %7d %7d\n", i, j, (int)c);
            }
        }
    }
    return 0;
}
