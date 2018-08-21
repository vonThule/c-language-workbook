/*
 * Filename: problem_10.c
 * Project: C Language Workbook Problems
 * Section: Chapter 1
 * Author: Alexander Popp
 * Date created: 08/19/2018
 * Date last modified: 08/19/2018
 * 
 * Description:
 *     Problem #10: Write a program that calculates ASCII value of
 *     small and capital letter A, and outputs their difference.
 */


#include <stdio.h>

int main() {
    int asciiBigA = 'A', asciiSmallA = 'a';
    printf("Difference between ASCII values of letters 'A' and 'a' is %d.\n", asciiSmallA - asciiBigA);
	return 0;
}
