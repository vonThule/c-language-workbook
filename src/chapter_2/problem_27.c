/*
 * Filename: problem_27.c
 * Project: C Language Workbook Problems
 * Section: Chapter 2
 * Author: Alexander Popp
 * Date created: 08/24/2018
 * Date last modified: 08/25/2018
 * 
 * Description:
 *     Problem #27: Write a program that determines all real solutions 
 *     of the quadratic equation ax^2 + bx + c = 0.
 */


#include <stdio.h>
#include <math.h>

int main() {
    int a, b, c;
    float D;
    float x1, x2;
    printf("Enter coefficients a, b and c >> ");
    scanf("%d%d%d", &a, &b, &c);
    D = b * b - 4 * a * c;
    printf("Equation: %dx^2 + %dx + %d = 0\n", a, b, c);
    if (D < 0) printf("There are no real solutions.\n");
    else if (D == 0) {
        x1 = -(b / (2 * a));
        printf("There is one solution: x = %f\n", x1);
    } else {
        x1 = (-b + sqrt(b * b - 4 * a * c)) / (2 * a);
        x2 = (-b - sqrt(b * b - 4 * a * c)) / (2 * a);
        printf("There are two solutions: x1 = %f, and x2 = %f\n", x1, x2);
    }
    return 0;
}
