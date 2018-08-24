/*
 * Filename: problem_07.c
 * Project: C Language Workbook Problems
 * Section: Chapter 2
 * Author: Alexander Popp
 * Date created: 08/24/2018
 * Date last modified: 08/24/2018
 * 
 * Description:
 *     Problem #07: Given an integer x, write a program that
 *     calculates y according to following formula:
 *         if x < 0,      then y = -5,
 *         if 0 <= x < 1, then y = x + 2,
 *         if 1 <= x < 5, then y = 3x - 2,
 *         if x >= 5,     then y = 2x
 */


#include <stdio.h>

int main() {
    int x, y;
    printf("Enter and integer >> ");
    scanf("%d", &x);
    if (x < 0) y = -5;
    else if (x >= 0 && x < 1) y = x + 2;
    else if (x >= 1 && x < 5) y = 3 * x - 2;
    else y = 2 * x;
    printf("Y = %d.\n", y);
	return 0;
}
