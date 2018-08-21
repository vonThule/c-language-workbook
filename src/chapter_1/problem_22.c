/*
 * Filename: problem_22.c
 * Project: C Language Workbook Problems
 * Section: Chapter 1
 * Author: Alexander Popp
 * Date created: 08/19/2018
 * Date last modified: 08/20/2018
 * 
 * Description:
 *     Problem #22: Two trucks are driving towards each other
 *     from points A and B. The first truck's velocity is V1,
 *     and the second truck's velocity V2. Trucks meat after 
 *     T seconds. Write a program that calculates the distance
 *     between points A and B.
 */


#include <stdio.h>

int main() {
    int v1, v2, t;
    printf("Enter the velocity of the first truck (m/s) >> ");
    scanf("%d", &v1);
    printf("Enter the velocity of the second truck (m/s) >> ");
    scanf("%d", &v2);
    printf("Enter the time after which the trucks meet (s) >> ");
    scanf("%d", &t);
    printf("The distance between point A and point B is %dm.\n", (v1 * t + v2 * t));
	return 0;
}
