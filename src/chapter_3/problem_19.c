/*
 * Filename: problem_19.c
 * Project: C Language Workbook Problems
 * Section: Chapter 3
 * Author: Alexander Popp
 * Date created: 08/29/2018
 * Date last modified: 08/29/2018
 * 
 * Description:
 *     Problem #19: Write a program that checks if the given natural
 *     number is prime.
 * Note: 
 *     A number is prime if it is divisible only with itself and 1. We
 *     can speed up the check by checking if the number is divisible by 
 *     numbers from 1 to his square root.
 */


#include <stdio.h>
#include <math.h>

int main() {
    int number;
    int prime = 1;
    printf("Enter number >> ");
    scanf("%d", &number);
    for(int i = 2; i <= sqrt(number); i++) {
        if (number % i == 0) {
            prime = 0;
            break;
        }
    }
    if (prime && number != 1) printf("Number %d is prime.\n", number);
    else printf("Number %d is not prime.\n", number);
    return 0;
}
