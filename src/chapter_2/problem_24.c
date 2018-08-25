/*
 * Filename: problem_24.c
 * Project: C Language Workbook Problems
 * Section: Chapter 2
 * Author: Alexander Popp
 * Date created: 08/24/2018
 * Date last modified: 08/25/2018
 * 
 * Description:
 *     Problem #24: Write a program that checks if a triangle can be
 *     made from three given lines.
 * Note:
 *     Sum of any two sides of a traingle must be larger than it's third
 *     side (triangle inequality).
 */


#include <stdio.h>

int main() {
    int l1, l2, l3;
    printf("Enter lengths for three lines >> ");
    scanf("%d%d%d", &l1, &l2, &l3);
    if (l1 + l2 > l3 && l1 + l3 > l2 && l2 + l3 > l1) printf("A triangle can be made.\n");
    else printf("A triangle cannot be made.\n");
	return 0;
}
