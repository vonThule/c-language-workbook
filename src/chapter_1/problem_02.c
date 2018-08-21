/*
 * Filename: problem_02.c
 * Project: C Language Workbook Problems
 * Section: Chapter 1
 * Author: Alexander Popp
 * Date created: 08/19/2018
 * Date last modified: 08/19/2018
 * 
 * Description:
 *     Problem #02: Write a program that converts temperature given in
 *     degrees Kelvin, to degrees Celsius.
 *     Use the following formula: Tc = Tk - 273.15.
 */


#include <stdio.h>

int main() {
    float kelvin, celsius;
    printf("Enter the temperature in degrees Kelvin >> ");
	scanf("%f", &kelvin);
	celsius = kelvin - 273.15;
	printf("%.2f degrees Kelvin equals to %.2f degrees Celsius.\n", kelvin, celsius);
	return 0;
}
