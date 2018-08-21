/*
 * Filename: problem_13.c
 * Project: C Language Workbook Problems
 * Section: Chapter 1
 * Author: Alexander Popp
 * Date created: 08/19/2018
 * Date last modified: 08/19/2018
 * 
 * Description:
 *     Problem #13: Input an angle in degrees with four decimal places.
 *     Write a program that converts that number into degrees, minutes
 *     and seconds.
 * Note: 
 *     1 degree = 60 minutes, 1 minute = 60 seconds.
 * Example: 
 *     For inputed angle of 45.2345, the program should output
 *     45 degrees, 14 minutes and 4.2 seconds.
 */


#include <stdio.h>

int main() {
    float angle, seconds;
    int degrees, minutes;
    printf("Input the value of an angle in degrees with four decimal spaces >> ");
    scanf("%f", &angle);
    degrees = (int)angle;
    minutes = (int)((angle - degrees) * 60);
    seconds = (((angle - degrees) * 60) - minutes) * 60;
    printf("%f is %d degrees, %d minute(s) and %f second(s).\n", angle, degrees, minutes, seconds); 
	return 0;
}
