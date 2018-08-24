/*
 * Filename: problem_04.c
 * Project: C Language Workbook Problems
 * Section: Chapter 2
 * Author: Alexander Popp
 * Date created: 08/24/2018
 * Date last modified: 08/24/2018
 * 
 * Description:
 *     Problem #04: Given a year as input, write a program that
 *     checks if the year is a leap year.
 */


#include <stdio.h>

int main() {
    int year;
    printf("Enter a year >> ");
    scanf("%d", &year);
    if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0) {
        printf("The year %d is a leap year.\n", year);
    } else printf("The year %d is not a leap year.\n", year);
	return 0;
}
