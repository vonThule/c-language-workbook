/*
 * Filename: problem_25.c
 * Project: C Language Workbook Problems
 * Section: Chapter 2
 * Author: Alexander Popp
 * Date created: 08/24/2018
 * Date last modified: 08/25/2018
 * 
 * Description:
 *     Problem #25: Write a program that checks what kind of triangle
 *     can be made from three given lines (isosceles, equilateral,
 *     scalene, right, obtuse or acute).
 */


#include <stdio.h>
#include <math.h>

int main() {
    int a, b, c;
    float cosa, cosb, cosc;
    float angle_a, angle_b, angle_c;
    printf("Enter lengths for three lines >> ");
    scanf("%d%d%d", &a, &b, &c);
    if (a + b > c && a + c > b && b + c > a) {
        printf("Triangle by sides:\n");
        if (a == b && a == c) printf("An equilateral triangle can be made.\n");
        else if (a == b && a != c) printf("An isosceles triangle can be made.\n");
        else printf("A scalene triangle can be made.\n");
        printf("Triangle by angles:\n");
        cosa = (b * b + c * c - a * a) / (2 * b * c);
        cosb = (c * c + a * a - b * b) / (2 * c * a);
        cosc = (a * a + b * b - c * c) / (2 * a * b);
        angle_a = acos(cosa);
        angle_b = acos(cosb);
        angle_c = acos(cosc);
        if (angle_a == 90.0 && angle_b != 90.0 && angle_c != 90.0) printf("A right-angled triangle can be made.\n");
        else if (angle_a != 90.0 && angle_b == 90.0 && angle_c != 90.0) printf("A right-angled triangle can be made.\n");
        else if (angle_a != 90.0 && angle_b != 90.0 && angle_c == 90.0) printf("A right-angled triangle can be made.\n");
        else if (angle_a > 90.0 && angle_b < 90.0 && angle_c < 90.0) printf("An obtuse triangle can be made.\n");
        else if (angle_a < 90.0 && angle_b > 90.0 && angle_c < 90.0) printf("An obtuse triangle can be made.\n");
        else if (angle_a < 90.0 && angle_b < 90.0 && angle_c > 90.0) printf("An obtuse triangle can be made.\n");
        else printf("An acute triangle can be made.\n");
    } else printf("A triangle cannot be made.\n");
	return 0;
}
