/*
 * Filename: problem_62.c
 * Project: C Language Workbook Problems
 * Section: Chapter 3
 * Author: Alexander Popp
 * Date created: 06/10/2019
 * Date last modified: 06/10/2019
 * 
 * Description:
 *     Problem #62: Sum of infinite order (sum from i=1 to infinity)1/(2i-1)^2 is pi^2/8. 
 *     Find the smallest value of n so that the difference |(sum from i=1 to infinity)1/(2i-1)^2 - pi^2/8|
 *     is smaller than the given precision epsilon.
 */


#include <stdio.h>
#include <math.h>

int main() {
    int i = 1;
    double epsilon, inf_sum, p_sum = 0.0;
    printf("Enter the value of epsilon >> ");
    scanf("%lf", &epsilon);
    inf_sum = (M_PI * M_PI) / 8;
    do {
        p_sum += 1.0 / pow((2.0 * i - i), 2.0);
        i++;
    } while (fabs(p_sum - inf_sum) >= epsilon);
    printf("Number of iterations is: %d\n", i);
    return 0;
}
