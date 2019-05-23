/*
 * Filename: problem_51.c
 * Project: C Language Workbook Problems
 * Section: Chapter 3
 * Author: Alexander Popp
 * Date created: 05/23/2019
 * Date last modified: 05/23/2019
 * 
 * Description:
 *     Problem #51: Check if the given integer N is a power of number 3.
 */


#include <stdio.h>

int main() {
    int n;
    
    printf("Enter an integer >> ");
    scanf("%d", &n);

    printf("Number %d ", n);
    if(n > 0) {
        while(n % 3 == 0) {
            n /= 3;
        }
        if(n == 1) printf("is a power of number 3.\n");
        else printf("is not a power of number 3.\n");
    }
    else {
        printf("is not a power of number 3.\n");
    }

    return 0;
}
