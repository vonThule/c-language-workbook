/*
 * Filename: problem_07.c
 * Project: C Language Workbook Problems
 * Section: Chapter 1
 * Author: Alexander Popp
 * Date created: 08/19/2018
 * Date last modified: 08/19/2018
 * 
 * Description:
 *     Problem #07: Write a program that, for a given distance 
 *     travelled (S) and time (T) in which the distance was travelled,
 *     calculates the average velocity.
 */


#include <stdio.h>

int main() {
    float S, T;
    printf("Enter the distance in meters >> ");
    scanf("%f", &S);
    printf("Enter the time it took to travel in seconds >> ");
    scanf("%f", &T);
    printf("The average velocity was %f m/s.\n", S / T);
	return 0;
}
