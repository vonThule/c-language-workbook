/*
 * Filename: problem_57.c
 * Project: C Language Workbook Problems
 * Section: Chapter 3
 * Author: Alexander Popp
 * Date created: 05/30/2019
 * Date last modified: 05/30/2019
 * 
 * Description:
 *     Problem #57: Print out the sum of the largest and smallest digit of the given number N.
 */


#include <stdio.h>

int main() {
    int n, number;
    int min = 9, max = 0;

    printf("Enter n >> ");
    scanf("%d", &n);

    number = n;

    while(n) {
        int digit;
        digit = n % 10;
        if(digit < min) min = digit;
        else if(digit > max) max = digit;
        n /= 10;
    }
    
    printf("The smallest digit of number %d is %d, and the largest is %d.\n", number, min, max);
    printf("Sum of these two digits is: %d.\n", min + max);
    return 0;
}
