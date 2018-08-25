/*
 * Filename: problem_26.c
 * Project: C Language Workbook Problems
 * Section: Chapter 2
 * Author: Alexander Popp
 * Date created: 08/24/2018
 * Date last modified: 08/25/2018
 * 
 * Description:
 *     Problem #26: Write a program that checks if the given year
 *     is leap according to the Milankovic calendar.
 * Note:
 *     By the Milankovic reform, leap years are all years that are
 *     divisible by 4, except those that end the century. Of the 
 *     century ending years, leap years are those that after dividing
 *     their first two digits by 9 give a mod of 2 or 6. Milankovic
 *     calendar is the same as Gregorian up until the year 2800.
 */


#include <stdio.h>

int main() {
    int year;
    int d1, d2;
    printf("Enter year >> ");
    scanf("%d", &year);
    if (year % 4 == 0) {
        if (year % 100 == 0) {
            if ((year / 100) % 9 == 2 || (year / 100) % 9 == 6) {
                printf("The year %d is a leap year.\n", year);
            } else {
                printf("The year %d is not a leap year.\n", year);
            }
        } else {
            printf("The year %d is a leap year.\n", year);
        }
    } else {
        printf("The year %d is not a leap year.\n", year);
    }
    return 0;
}
