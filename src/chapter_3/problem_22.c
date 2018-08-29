/*
 * Filename: problem_22.c
 * Project: C Language Workbook Problems
 * Section: Chapter 3
 * Author: Alexander Popp
 * Date created: 08/29/2018
 * Date last modified: 08/29/2018
 * 
 * Description:
 *     Problem #22: Write a program which prints out all three-digit
 *     Armstrong numbers.
 */


#include <stdio.h>
#include <math.h>

int main() {
    int number;
    for (int i = 1; i <= 9; i++) {
        for (int j = 0; j <= 9; j++) {
            for (int k = 0; k <= 9; k++) {
                number = i * 100 + j * 10 + k;
                if(number == (pow(i, 3) + pow(j, 3) + pow(k, 3))) {
                    printf("Armstrong number >>> %d\n", number);
                }
            }
        }
    }
    return 0;
}
