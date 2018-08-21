/*
 * Filename: problem_24.c
 * Project: C Language Workbook Problems
 * Section: Chapter 1
 * Author: Alexander Popp
 * Date created: 08/19/2018
 * Date last modified: 08/20/2018
 * 
 * Description:
 *     Problem #24: Write a program that asks the user to input some
 *     capital letter, and then prints to standard output coresponding
 *     small letter.
 */


#include <stdio.h>

int main() {
    char letter;
    printf("Enter a capital letter >> ");
    scanf("%c", &letter);
    printf("The corresponding small letter to letter %c is %c.\n", letter, letter + 32);
	return 0;
}
