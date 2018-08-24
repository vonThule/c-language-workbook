/*
 * Filename: problem_11.c
 * Project: C Language Workbook Problems
 * Section: Chapter 2
 * Author: Alexander Popp
 * Date created: 08/24/2018
 * Date last modified: 08/24/2018
 * 
 * Description:
 *     Problem #11: Program should determine whether or not
 *     the two given lines intersect.
 * Note:
 *     Two lines will not intersect if they are congruent or
 *     parallel. Lines writen in explicit form y = k1x + n1 and
 *     y = k2x + n2 are parallel if k1 = k2 and congruent if also
 *     n1 = n2.
 */


#include <stdio.h>

int main() {
    float k1, k2, n1, n2;
    printf("Enter 'k' and 'n' of the first line >> ");
    scanf("%f%f", &k1, &n1);
    printf("Enter 'k' and 'n' of the second line >> ");
    scanf("%f%f", &k2, &n2);
    if (k1 == k2) {
        if (n1 == n2) printf("The two lines are cogruent.\n");
        else printf("The two lines are parallel.\n");
    } else {
        printf("The two lines intersect.\n");
    }
	return 0;
}
