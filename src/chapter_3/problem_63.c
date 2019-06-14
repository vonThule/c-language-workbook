/*
 * Filename: problem_63.c
 * Project: C Language Workbook Problems
 * Section: Chapter 3
 * Author: Alexander Popp
 * Date created: 06/14/2019
 * Date last modified: 06/14/2019
 * 
 * Description:
 *     Problem #63: Sum of infinite order (som from i=1 to infinity)(-1)^(i-1)/i^2 is pi^2/12.
 *     Find the smallest value n so that the difference |(sum from i=1 to infinity)(-1)^(i-1)/i^2 - pi^2/12|
 *     is less than the given precision epsilon.
 */


#include <stdio.h>
#include <math.h>

int main() {
    int i = 1;
    double epsilon, inf_sum, p_sum = 0.0;
    printf("Enter the value of epsilon >> ");
    scanf("%lf", &epsilon);
    inf_sum = (M_PI * M_PI) / 12;
    do {
        p_sum += pow(-1.0, (i - 1)) / pow(i, 2.0);
        i++;
    } while (fabs(p_sum - inf_sum) >= epsilon);
    printf("Number of iterations is: %d\n", i);
    return 0;
}
