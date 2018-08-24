/*
 * Filename: problem_20.c
 * Project: C Language Workbook Problems
 * Section: Chapter 2
 * Author: Alexander Popp
 * Date created: 08/24/2018
 * Date last modified: 08/24/2018
 * 
 * Description:
 *     Problem #20: Write a program that determines the difference
 *     between two largest integers if three are given.
 */


#include <stdio.h>

int main() {
    int int1, int2, int3;
    int largest1, largest2;
    printf("Enter three integers >> ");
    scanf("%d%d%d", &int1, &int2, &int3);
    if (int1 > int2 && int1 > int3) {
        largest1 = int1;
        if (int2 > int3) largest2 = int2;
        else largest2 = int3;
    } else if (int2 > int1 && int2 > int3) {
        largest1 = int2;
        if (int1 > int3) largest2 = int1;
        else largest2 = int3;
    } else {
        largest1 = int3;
        if (int1 > int2) largest2 = int1;
        else largest2 = int2;
    }
    printf("Difference between %d and %d is: %d.\n", largest1, largest2, largest1 - largest2);
	return 0;
}
