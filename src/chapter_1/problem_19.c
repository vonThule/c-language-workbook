/*
 * Filename: problem_19.c
 * Project: C Language Workbook Problems
 * Section: Chapter 1
 * Author: Alexander Popp
 * Date created: 08/19/2018
 * Date last modified: 08/19/2018
 * 
 * Description:
 *     Problem #19: Write a program that calculates the discount D
 *     for item of price P.
 */


#include <stdio.h>

int main() {
    int D;
    float P;
    printf("Enter price >> ");
    scanf("%f", &P);
    printf("Enter discount in percents >> ");
    scanf("%d", &D);
    printf("Item with price %.2f, after %d%% discount, costs %.2f.\n", P, D, P - P * ((float)D / 100));
	return 0;
}
