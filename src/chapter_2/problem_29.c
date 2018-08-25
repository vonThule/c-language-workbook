/*
 * Filename: problem_29.c
 * Project: C Language Workbook Problems
 * Section: Chapter 2
 * Author: Alexander Popp
 * Date created: 08/24/2018
 * Date last modified: 08/25/2018
 * 
 * Description:
 *     Problem #29: According to the points the student recieved on the
 *     exam, print the grade.
 */


#include <stdio.h>

int main() {
    float points;
    printf("Enter number of points the student recieved on the exam >>");
    scanf("%f", &points);
    printf("Grade: ");
    if (points < 60) printf("F\n");
    else if (points >= 60 && points <= 62) printf("D-\n");
    else if (points >= 63 && points <= 66) printf("D\n");
    else if (points >= 67 && points <= 69) printf("D+\n");
    else if (points >= 70 && points <= 72) printf("C-\n");
    else if (points >= 73 && points <= 76) printf("C\n");
    else if (points >= 77 && points <= 79) printf("C+\n");
    else if (points >= 80 && points <= 82) printf("B-\n");
    else if (points >= 83 && points <= 86) printf("B\n");
    else if (points >= 87 && points <= 89) printf("B+\n");
    else if (points >= 90 && points <= 92) printf("A-\n");
    else if (points >= 93 && points <= 96) printf("A\n");
    else if (points >= 97 && points <= 100) printf("A+\n");
    else printf("Unrecognised input: %f\n", points);
	return 0;
}
