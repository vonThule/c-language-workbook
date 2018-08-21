/*
 * Filename: problem_17.c
 * Project: C Language Workbook Problems
 * Section: Chapter 1
 * Author: Alexander Popp
 * Date created: 08/19/2018
 * Date last modified: 08/19/2018
 * 
 * Description:
 *     Problem #17: Write a program that converts centimeters into
 *     kilometers.
 */


#include <stdio.h>

int main() {
    int cms;
    printf("Enter length in centimeters (cm) >> ");
    scanf("%d", &cms);
    printf("%d cm = %f km.\n", cms, (float)cms / 100000);
    return 0;
}
