/*
 * Filename: problem_09.c
 * Project: C Language Workbook Problems
 * Section: Chapter 2
 * Author: Alexander Popp
 * Date created: 08/24/2018
 * Date last modified: 08/24/2018
 * 
 * Description:
 *     Problem #09: Write a program that solves the equation ax + b = 0. 
 *     Print out all possible solutions to the equation.
 */


#include <stdio.h>

int main() {
    float a, b;
    printf("Enter two numbers >> ");
    scanf("%f%f", &a, &b);
    printf("The equation %fx + %f = 0 ", a, b);
    if (a != 0) printf("has one solution: x = %f.\n", -b / a);
    else if (b != 0) printf ("doesn't have a solution.\n");
    else printf("has infinite number of solutions.\n");
	return 0;
}
