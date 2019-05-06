/*
 * Filename: problem_40.c
 * Project: C Language Workbook Problems
 * Section: Chapter 3
 * Author: Alexander Popp
 * Date created: 05/06/2019
 * Date last modified: 05/06/2019
 * 
 * Description:
 *     Problem #40: A number is given as a text input via getchar() function.
 *     Print out the mean of the digits of that number.
 */


#include <stdio.h>

int main() {
    char input;
    int sum = 0, num = 0;
    printf("Enter number >> ");
    while((input = getchar()) != '\n') {
        if(input >= '0' && input <= '9') {
            num++;
            sum += input - '0';
        }
    }
    printf("The mean of the digits is: %.2f.\n", (float)sum / num);
    return 0;
}
