/*
 * Filename: problem_21.c
 * Project: C Language Workbook Problems
 * Section: Chapter 1
 * Author: Alexander Popp
 * Date created: 08/19/2018
 * Date last modified: 08/20/2018
 * 
 * Description:
 *     Problem #21: Write a program that takes in an angle given in
 *     degrees, minutes and seconds (enter each part separetely).
 *     It should then output the given angle in units of time.
 * Example: 
 *     360 degrees = 24h. 1h = 15 degrees.
 */


#include <stdio.h>

int main() {
    int degrees, minutes, seconds, seconds_total, seconds_clock;
    int hours, t_minutes, t_seconds;
    printf("Enter angle information:\n");
    printf("Enter degrees >> ");
    scanf("%d", &degrees);
    printf("Enter minutes >> ");
    scanf("%d", &minutes);
    printf("Enter seconds >> ");
    scanf("%d", &seconds);
    seconds_total = seconds + minutes * 60 + degrees * 3600;
    seconds_clock = seconds_total / 15;
    hours = seconds_clock / 3600;
    t_minutes = (seconds_clock - (hours * 3600)) / 60;
    t_seconds = seconds_clock - hours * 3600 - t_minutes * 60;
    printf("%d hours, %d minutes and %d seconds.\n", hours, t_minutes, t_seconds);
	return 0;
}
