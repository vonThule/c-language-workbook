/*
 * Filename: problem_30.c
 * Project: C Language Workbook Problems
 * Section: Chapter 2
 * Author: Alexander Popp
 * Date created: 08/24/2018
 * Date last modified: 08/25/2018
 * 
 * Description:
 *     Problem #30: Given a month number, print out it's name.
 */


#include <stdio.h>

int main() {
    int month;
    printf("Enter month number >> ");
    scanf("%d", &month);
    switch(month) {
        case 1: printf("January"); break;
        case 2: printf("February"); break;
        case 3: printf("March"); break;
        case 4: printf("April"); break;
        case 5: printf("May"); break;
        case 6: printf("June"); break;
        case 7: printf("July"); break;
        case 8: printf("August"); break;
        case 9: printf("September"); break;
        case 10: printf("October"); break;
        case 11: printf("November"); break;
        case 12: printf("December"); break;
        default: printf("Unrecognised input: %d", month);
    }
    printf("\n");
	return 0;
}
