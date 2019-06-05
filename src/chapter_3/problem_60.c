/*
 * Filename: problem_60.c
 * Project: C Language Workbook Problems
 * Section: Chapter 3
 * Author: Alexander Popp
 * Date created: 06/05/2019
 * Date last modified: 06/05/2019
 * 
 * Description:
 *     Problem #60: Print out all 3-digit prime numbers.
 */


#include <stdio.h>

int main() {
    int i, j, isPrime;

    printf("3-digit prime numbers: ");

    for(i = 101; i <= 999; i++) {
        isPrime = 1;
        for(j = 2; j <= i / 2; j++) {
            if(i % j == 0) {
                isPrime = 0;
                break;
            }
        }
        if(isPrime == 1)
            printf("%d ", i);
    }

    printf("\n");
    return 0;
}
