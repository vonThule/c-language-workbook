/*
 * Filename: problem_72.c
 * Project: C Language Workbook Problems
 * Section: Chapter 3
 * Author: Alexander Popp
 * Date created: 13/08/2020
 * Date last modified: 13/08/2020
 * 
 * Description:
 *     Problem #72: Write a program that multiplies numbers given by user,
 *     up until the product passes N.
 *     
 */


#include <stdio.h>

int main() {
    int n, number, product = 1;
    printf("Enter limit (n) >> ");
    scanf("%d", &n);
    do {
        printf("Enter an integer >> ");
        scanf("%d", &number);
        product *= number;
        printf("Product @ [%d/%d].\n", product, n);
    } while (product <= n);
    printf("The final product, after passing the limit of %d is: %d.\n", n, product);
    return 0;
}
