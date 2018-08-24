/*
 * Filename: problem_15.c
 * Project: C Language Workbook Problems
 * Section: Chapter 2
 * Author: Alexander Popp
 * Date created: 08/24/2018
 * Date last modified: 08/24/2018
 * 
 * Description:
 *     Problem #15: Given a grade number, write a program that states
 *     whether the grade is excellent, very good, good, sufficient or
 *     insufficient. Notify the user if they enter a grade outside of
 *     the grade interval (1-5).
 */


#include <stdio.h>

int main() {
    int grade_number;
    printf("Enter grade-number (1-5) >> ");
    scanf("%d", &grade_number);
	switch(grade_number) {
        case 1: printf("Insufficient.\n"); break;
        case 2: printf("Sufficient.\n"); break;
        case 3: printf("Good.\n"); break;
        case 4: printf("Very good.\n"); break;
        case 5: printf("Excellent.\n"); break;
        default: printf("You entered a wrong number!\n");
    }
    return 0;
}
