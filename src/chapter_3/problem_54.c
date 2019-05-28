/*
 * Filename: problem_54.c
 * Project: C Language Workbook Problems
 * Section: Chapter 3
 * Author: Alexander Popp
 * Date created: 05/28/2019
 * Date last modified: 05/28/2019
 * 
 * Description:
 *     Problem #54: Determine the smallest number of even numbers, starting from 2,
 *     whose sum is greater than the given value.
 */


#include <stdio.h>

int main() {
    int val, i;
    int sum = 0, counter = 0;

    printf("Enter value >> ");
    scanf("%d", &val);

    for(i = 2;; i += 2) {
        sum += i;
        counter++;
        if(sum > val) break;
    }
    printf("The smallest number of even numbers, starting from 2, whose sum is greater than %d is: %d.\n", val, counter);
    return 0;
}
