/*
 * Filename: problem_20.c
 * Project: C Language Workbook Problems
 * Section: Chapter 3
 * Author: Alexander Popp
 * Date created: 08/29/2018
 * Date last modified: 08/29/2018
 * 
 * Description:
 *     Problem #20: Write a program that among the numbers:
 *     1, 1 * 2, 1 * 2 * 3,... finds the first larger than the given
 *     number.
 */


#include <stdio.h>

int main() {
    int number;
    int product = 1, i = 1;
    printf("Enter number >> ");
    scanf("%d", &number);
    while(product <= number) product *= i++;
    printf("First larger number is %d\n", product);
    return 0;
}
