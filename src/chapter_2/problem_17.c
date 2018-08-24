/*
 * Filename: problem_17.c
 * Project: C Language Workbook Problems
 * Section: Chapter 2
 * Author: Alexander Popp
 * Date created: 08/24/2018
 * Date last modified: 08/24/2018
 * 
 * Description:
 *     Problem #17: Given a month number, write a program that prints
 *     out it's corresponding number of days. In case of February, ask
 *     the user if the year is leap.
 */


#include <stdio.h>

int main() {
    int month_number;
    char leap;
    printf("Enter the number of a month >> ");
    scanf("%d", &month_number);
    switch(month_number) {
        case 1: case 3: case 5: case 7: case 8: case 10: case 12:
            printf("The month you enterd has 31 days in it.\n"); break;
        case 4: case 6: case 9: case 11:
            printf("The month you enterd has 30 days in it.\n"); break;
        case 2:
            printf("Is it a leap year (y/n) >> ");
            scanf(" %c", &leap);
            if (leap == 'y' || leap == 'Y') {
                printf("The month you entered has 29 days.\n");
            } else if(leap == 'n' || leap == 'N') {
                printf("The month you entered has 28 days.\n");
            } else {
                printf("Unrecognised input: '%c'\n", leap);
            }
            break;
        default: printf("You have entered a wrong number: %d\n", month_number);
    }
	return 0;
}
