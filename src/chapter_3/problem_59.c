/*
 * Filename: problem_59.c
 * Project: C Language Workbook Problems
 * Section: Chapter 3
 * Author: Alexander Popp
 * Date created: 05/31/2019
 * Date last modified: 06/02/2019
 * 
 * Description:
 *     Problem #59: Number of mosquitoes in some town is N_MOS. After how many months
 *     will the number of mosquitoes become smaller than the given value if their number
 *     declines by P% yearly.
 */


#include <stdio.h>

int main() {
    int n_mos, perc;
    int counter = 0;
    double current, val;

    printf("Enter number of mosquitoes >> ");
    scanf("%d", &n_mos);
    printf("Enter treshold >> ");
    scanf("%lf", &val);
    printf("Enter decline rate (%) >> ");
    scanf("%d", &perc);

    current = n_mos;
    
    while(current >= val) {
        current -= current * (perc / 1200.0);
        counter++;
    }

    printf("Number of mosquitoes will become smaller than %.0f in %d months.\n", val, counter);
    return 0;
}
