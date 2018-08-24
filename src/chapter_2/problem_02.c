/*
 * Filename: problem_02.c
 * Project: C Language Workbook Problems
 * Section: Chapter 2
 * Author: Alexander Popp
 * Date created: 08/24/2018
 * Date last modified: 08/24/2018
 * 
 * Description:
 *     Problem #02: Write a program that implements the function
 *     abs(x).
 */


#include <stdio.h>

int main() {
    int x;
    printf("Enter an integer >> ");
    scanf("%d", &x);
    printf("abs(%d) = %d.\n", x, (x < 0) ? -x : x);
	return 0;
}
