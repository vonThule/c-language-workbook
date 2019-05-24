/*
 * Filename: problem_53.c
 * Project: C Language Workbook Problems
 * Section: Chapter 3
 * Author: Alexander Popp
 * Date created: 05/24/2019
 * Date last modified: 05/24/2019
 * 
 * Description:
 *     Problem #53: Utilising Einsteins formula E=mc^2, print out a table that shows
 *     the change in energy if the mass changes from m1 to m2.
 */


#include <stdio.h>
#include <math.h>

int main() {
    double e;
    int m1, m2, mass;
    double c = 299792458.0;

    printf("Enter m1 >> ");
    scanf("%d", &m1);
    printf("Enter m2 >> ");
    scanf("%d", &m2);

    mass = m1;
    printf(" m(kg)\t\tE(J)\n");
    while(mass <= m2) {
        e = mass * pow(c, 2);
        printf("%3d\t %6.0lf\n", mass, e);
        mass += 1;
    }

    return 0;
}
