/*
 * Filename: problem_11.c
 * Project: C Language Workbook Problems
 * Section: Chapter 1
 * Author: Alexander Popp
 * Date created: 08/19/2018
 * Date last modified: 08/19/2018
 * 
 * Description:
 *     Problem #11: For entered small letter, output it's
 *     coresponding capital letter.
 * Note:
 *     Difference between small and capital letters in ASCII
 *     is constant.
 */


#include <stdio.h>

int main() {
    char letter;
    printf("Enter a small letter >> ");
    scanf("%c", &letter);
    printf("The corresponding capital letter of the letter '%c' is '%c'.\n", letter, letter - 32);
	return 0;
}
