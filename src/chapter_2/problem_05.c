/*
 * Filename: problem_05.c
 * Project: C Language Workbook Problems
 * Section: Chapter 2
 * Author: Alexander Popp
 * Date created: 08/24/2018
 * Date last modified: 08/24/2018
 * 
 * Description:
 *     Problem #05: Given two integers K and L, write a program that
 *     checks if number K is divisible by number L.
 */


#include <stdio.h>

int main() {
    int K, L;
    printf("Enter first number >> ");
    scanf("%d", &K);
    printf("Enter second number >> ");
    scanf("%d", &L);
    if (K % L == 0) printf("Number %d is divisible by number %d.\n", K, L);
    else printf("Number %d is not divisible by number %d.\n", K, L);
	return 0;
}
