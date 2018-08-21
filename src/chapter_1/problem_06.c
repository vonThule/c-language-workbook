/*
 * Filename: problem_06.c
 * Project: C Language Workbook Problems
 * Section: Chapter 1
 * Author: Alexander Popp
 * Date created: 08/19/2018
 * Date last modified: 08/19/2018
 * 
 * Description:
 *     Problem #06: For a given circle radius, output its area.
 */


#include <stdio.h>

#define PI 3.14

int main() {
    float radius;
    printf("Enter the radius of a circle >> ");
    scanf("%f", &radius);
    printf("The area of a circle with radius %f is %f.\n", radius, radius * radius * PI);
	return 0;
}
