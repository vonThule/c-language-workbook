/*
 * Filename: problem_06.c
 * Project: C Language Workbook Problems
 * Section: Chapter 2
 * Author: Alexander Popp
 * Date created: 08/24/2018
 * Date last modified: 08/24/2018
 * 
 * Description:
 *     Problem #06: Given cathetes of two right-angled triangles, 
 *     a1, b1, a2 and b2, check which one of the two triangles
 *     has the bigger area.
 */


#include <stdio.h>

int main() {
    float a1, a2, b1, b2;
    printf("Enter cathetes of the first traingle >> ");
    scanf("%f%f", &a1, &b1);
    printf("Enter cathetes of the second traingle >> ");
    scanf("%f%f", &a2, &b2);
    if ((a1 * b1) / 2 > (a2 * b2) / 2) printf("First triangle has the bigger area.\n");
    else printf("Second triangle has the bigger area.\n");
	return 0;
}
