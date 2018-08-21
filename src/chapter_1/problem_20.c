/*
 * Filename: problem_20.c
 * Project: C Language Workbook Problems
 * Section: Chapter 1
 * Author: Alexander Popp
 * Date created: 08/19/2018
 * Date last modified: 08/19/2018
 * 
 * Description:
 *     Problem #20: Calculate the time needed until the light from
 *     the Sun reaches Earth, if the speed of light is 300 000 km/s,
 *     and average distance between the two bodies 149 600 000 km.
 */


#include <stdio.h>

#define SPEED_OF_LIGHT 300000
#define AVG_DISTANCE 149600000

int main() {
    int time = AVG_DISTANCE / SPEED_OF_LIGHT;
    printf("It takes %ds, until light from the Sun reaches Earth.\n", time);
	return 0;
}
