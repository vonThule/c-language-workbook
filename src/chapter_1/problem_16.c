/*
 * Filename: problem_16.c
 * Project: C Language Workbook Problems
 * Section: Chapter 1
 * Author: Alexander Popp
 * Date created: 08/19/2018
 * Date last modified: 08/19/2018
 * 
 * Description:
 *     Problem #16: Write a program that converts kilograms into pounds.
 * Note: 
 *     1kg = 2.2lb.
 */


#include <stdio.h>

int main() {
    float kgs;
    printf("Enter weight in kilograms (kg) >> ");
    scanf("%f", &kgs);
    printf("%f kg = %f lb.\n", kgs, 2.2 * kgs);
	return 0;
}
