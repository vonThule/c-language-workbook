/*
 * Filename: problem_09.c
 * Project: C Language Workbook Problems
 * Section: Chapter 1
 * Author: Alexander Popp
 * Date created: 08/19/2018
 * Date last modified: 08/19/2018
 * 
 * Description:
 *     Problem #09: Write a program that calculates n^m, where
 *     n and m are randomly generated integers from interval [1,10].
 */


#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

int main() {
    int n, m;
    srand(time(0));
    n = rand() % 10 + 1;
    m = rand() % 10 + 1;
    printf("%d to the power of %d equals %f.\n", n, m, pow(n, m));
	return 0;
}
