/*
 * Filename: problem_22.c
 * Project: C Language Workbook Problems
 * Section: Chapter 2
 * Author: Alexander Popp
 * Date created: 08/24/2018
 * Date last modified: 08/25/2018
 * 
 * Description:
 *     Problem #22: A nutritionist needs a program that determines
 *     how much weight (kg) their patients need to loose. Based on
 *     the given data about height, weight and gender, print out
 *     whether the person has ideal weight or not, and if not print
 *     out how much weight they need to loose or gain.
 */


#include <stdio.h>

int main() {
    float h, w, ideal;
    char gender;
    printf("Enter height (cm) >> ");
    scanf("%f", &h);
    printf("Enter weight (kg) >> ");
    scanf("%f", &w);
    printf("Enter gender (m/f) >> ");
    scanf(" %c", &gender);
    switch(gender) {
        case 'm': case 'M':
            ideal = h - 100;
            break;
        case 'f': case 'F':
            ideal = h - 110;
            break;
        default:
            printf("Urecognised input: %c", gender);
            return 1;
    }
    if (ideal < w) printf("You need to loose %fkg.\n", w - ideal);
    else if (ideal == w) printf("Your weight is ideal!\n");
    else printf("You need to gain %fkg.\n", ideal - w);
	return 0;
}
