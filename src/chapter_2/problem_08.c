/*
 * Filename: problem_08.c
 * Project: C Language Workbook Problems
 * Section: Chapter 2
 * Author: Alexander Popp
 * Date created: 08/24/2018
 * Date last modified: 08/24/2018
 * 
 * Description:
 *     Problem #08: Given two integers, x and y, write a program
 *     that calculates z according to the following formula:
 *         z = sqrt((min(x, y) + sin(x + 0.5)) / (max^2(x, y) - 1))
 */


#include <stdio.h>
#include <math.h>

int main() {
    int x, y, max, min;
    float z;
    printf("Enter two integers >> ");
    scanf("%d%d", &x, &y);
    if (x > y) {
        max = x;
        min = y;
    } else {
        max = y;
        min = x;
    }
    z = sqrt((min + sin(x + 0.5)) / (max * max - 1));
    printf("Z = %f.\n", z);    
	return 0;
}
