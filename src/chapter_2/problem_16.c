/*
 * Filename: problem_16.c
 * Project: C Language Workbook Problems
 * Section: Chapter 2
 * Author: Alexander Popp
 * Date created: 08/24/2018
 * Date last modified: 08/24/2018
 * 
 * Description:
 *     Problem #16: Given an angle in degrees, write a program that
 *     determines the quadrant to which it belongs to. The angle can be
 *     greater than 360.
 */


#include <stdio.h>

int main() {
    int angle;
    printf("Enter the degrees of an angle >> ");
    scanf("%d", &angle);
    angle %= 360;
    switch(angle / 90) {
        case 0: printf("First quadrant.\n"); break;
        case 1: printf("Second quadrant.\n"); break;
        case 2: printf("Third quadrant.\n"); break;
        case 3: printf("Fourth quadrant.\n"); break;
    }
	return 0;
}
