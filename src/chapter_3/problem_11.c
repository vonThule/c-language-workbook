/*
 * Filename: problem_11.c
 * Project: C Language Workbook Problems
 * Section: Chapter 3
 * Author: Alexander Popp
 * Date created: 08/28/2018
 * Date last modified: 08/28/2018
 * 
 * Description:
 *     Problem #11: User enters numbers until he enters the number 0.
 *     The program shoud print out the arithmetical mean of the given
 *     numbers.
 */


#include <stdio.h>

int main() {
    int n;
    int sum = 0, counter = 0;
    while (1) {
        printf("Enter number (0 to end) >> ");
        scanf("%d", &n);
        if (n == 0) break;
        sum += n;
        counter++;
    }
    if (counter == 0) printf("Unable to calculate.\nYou haven't entered any numbers.\n");
    else printf("Arithmetical mean is: %.2f\n", (float)sum / counter);
    return 0;
}
