/*
 * Filename: problem_18.c
 * Project: C Language Workbook Problems
 * Section: Chapter 2
 * Author: Alexander Popp
 * Date created: 08/24/2018
 * Date last modified: 08/24/2018
 * 
 * Description:
 *     Problem #18: Based on the height and gender, program needs to
 *     determine the ideal weight. Ideal weight for men is height-100
 *     and for women height-110.
 */


#include <stdio.h>

int main() {
    float height;
    char gender;
    printf("Enter height (cm) >> ");
    scanf("%f", &height);
    printf("Gender (m/f) >> ");
    scanf(" %c", &gender);
    switch(gender) {
        case 'm': case 'M':
            printf("Your ideal weight is: %.2fkg.\n", height - 100);
            break;
        case 'f': case 'F':
            printf("Your ideal weight is: %.2fkg.\n", height - 110);
            break;
        default:
            printf("You have entered an urecognised character: '%c'\n", gender);
    }
	return 0;
}
