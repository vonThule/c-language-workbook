/*
 * Filename: problem_73.c
 * Project: C Language Workbook Problems
 * Section: Chapter 3
 * Author: Alexander Popp
 * Date created: 14/08/2020
 * Date last modified: 14/08/2020
 * 
 * Description:
 *     Problem #73: Write a program that determines the number of small and
 *     capital letters in the given text.
 *          
 */


#include <stdio.h>

int main() {
    char chars;
    int upp = 0, low = 0;
    printf("Enter text >> ");
    while((chars = getchar()) != EOF) {
        if(chars >= 'A' && chars <= 'Z') upp++;
        if(chars >= 'a' && chars <= 'z') low++;
    }
    printf("Number of uppercase letters in text: %d,\nNumber of lowercase letters in text: %d.\n", upp, low);
    return 0;
}
