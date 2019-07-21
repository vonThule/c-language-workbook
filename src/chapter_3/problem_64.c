/*
 * Filename: problem_64.c
 * Project: C Language Workbook Problems
 * Section: Chapter 3
 * Author: Alexander Popp
 * Date created: 07/21/2019
 * Date last modified: 07/21/2019
 * 
 * Description:
 *     Problem #64: Write a program that, based on the given month and day of the month,
 *     determines the ordinal number of the day within the year.
 */


#include <stdio.h>

int main() {
    int month_number, day_number, day = 0;
    char leap;
    printf("Enter the number of a month >> ");
    scanf("%d", &month_number);
    printf("Enter the number of the day in the given month >> ");
    scanf("%d", &day_number);
    if (month_number == 1) day = day_number;
    else {
        for(int i = 1; i < month_number; i++) {
            switch(i) {
                case 1: case 3: case 5: case 7: case 8: case 10: case 12:
                    day += 31; break;
                case 4: case 6: case 9: case 11:
                    day += 30; break;
                case 2:
                    printf("Is it a leap year (y/n) >> ");
                    scanf(" %c", &leap);
                    if (leap == 'y' || leap == 'Y') {
                        day += 29;
                    } else if(leap == 'n' || leap == 'N') {
                        day += 28;
                    } else {
                        printf("Unrecognised input: '%c'\n", leap);
                    }
                    break;
                default: printf("You have entered a wrong number: %d\n", month_number);
                }
        }
        day += day_number;
    }
    printf("The ordinal number of the given day within the year is %d.\n", day);
	return 0;
}
