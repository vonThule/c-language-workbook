/*
 * Filename: problem_31.c
 * Project: C Language Workbook Problems
 * Section: Chapter 3
 * Author: Alexander Popp
 * Date created: 04/15/2019
 * Date last modified: 04/15/2019
 * 
 * Description:
 *     Problem #31: Sum of the infinite order sum(i is 1 until infinity)1/i^2 is pi^2/6.
 *     Find minimal n, such that the difference |sum(i is 1 until infinity)1/i^2 - pi^2/6|
 *     is smaller than the given value of epsilon.
 */


#include <stdio.h>
#include <math.h>

int main() {
    int i = 1;
    double epsilon, inf_sum, p_sum = 0.0;
    printf("Enter the value of epsilon >> ");
    scanf("%lf", &epsilon);
    inf_sum = (M_PI * M_PI) / 6;
    do {
        p_sum += 1.0 / (i * i);
        i++;
    } while (fabs(p_sum - inf_sum) >= epsilon);
    printf("Number of iterations is: %d\n", i);
    return 0;
}
