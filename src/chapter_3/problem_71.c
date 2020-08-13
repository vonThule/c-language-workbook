/*
 * Filename: problem_71.c
 * Project: C Language Workbook Problems
 * Section: Chapter 3
 * Author: Alexander Popp
 * Date created: 13/08/2020
 * Date last modified: 13/08/2020
 * 
 * Description:
 *     Problem #71: Given N number of grades of a student.
 *     Write a program that calculates the average grade.
 *
 */


#include <stdio.h>

int main() {
    int n, grade, sum = 0;
    printf("Enter number of grades (n) >> ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) {
        printf("Enter grade no. %d >> ", i);
        scanf("%d", &grade);
        sum += grade;
    }
    printf("The average grade is: %.2f.\n", (float)((float)sum / (float)n));
    return 0;
}
