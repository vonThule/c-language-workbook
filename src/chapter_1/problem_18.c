/*
 * Filename: problem_18.c
 * Project: C Language Workbook Problems
 * Section: Chapter 1
 * Author: Alexander Popp
 * Date created: 08/19/2018
 * Date last modified: 08/19/2018
 * 
 * Description:
 *     Problem #18: For a given temperature in degrees Celsius,
 *     output it's corresponding temperature in degrees Fahrenheit.
 * Note:
 *     Tf = (9/5)*Tc+32, where Tf - temperature in Fehrenheit,
 *     Tc - temperature in Celsius.
 */


#include <stdio.h>

int main() {
    float temp, Tf;
    printf("Enter temperature in degrees Celsius >> ");
    scanf("%f", &temp);
    Tf = ((float)9 / 5) * temp + 32;
    printf("%.2f degrees Celsius is equal to %.2f degrees Fahrenheit.\n", temp, Tf);
	return 0;
}
