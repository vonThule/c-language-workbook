/*
 * Filename: problem_23.c
 * Project: C Language Workbook Problems
 * Section: Chapter 1
 * Author: Alexander Popp
 * Date created: 08/19/2018
 * Date last modified: 08/20/2018
 * 
 * Description:
 *     Problem #23: User inputs the interval from which the computer
 *     randomly generates an integer and outputs it to stnadard output.
 */


#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int a, b, random_int;
    printf("Enter the starting point of interval >> ");
    scanf("%d", &a);
    printf("Enter the ending point of interval >> ");
    scanf("%d", &b);
    srand(time(0));
    random_int = rand() % (b - a + 1) + a;
    printf("Random number from interval %d-%d: %d.\n", a, b, random_int);
	return 0;
}
