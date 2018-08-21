/*
 * Filename: problem_08.c
 * Project: C Language Workbook Problems
 * Section: Chapter 1
 * Author: Alexander Popp
 * Date created: 08/19/2018
 * Date last modified: 08/19/2018
 * 
 * Description:
 *     Problem #08: Using Hubble's law, calculate the distance to
 *     distant extragalactic objects if given their radial speed.
 * Note:
 *     Hubble's law, which explains the expansion of cosmos, states:
 *     vrad = Ho * D, where Ho - Hubble's constant whose value is 
 *     about 75kms^-1Mpc^-1, vrad - radial speed of objects,
 *     D - distance to object in megaparsecs
 *     (1Mpc = 10^6 pc = 3.26 * 10^6 light years).
 */


#include <stdio.h>

#define Ho 75

int main() {
    double vrad; 
    printf("Enter radial speed of object >> ");
    scanf("%lf", &vrad);
    printf("Distance to object is %f Mpc.\n", vrad / Ho);
	return 0;
}
