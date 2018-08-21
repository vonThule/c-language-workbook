/*
 * Filename: problem_15.c
 * Project: C Language Workbook Problems
 * Section: Chapter 1
 * Author: Alexander Popp
 * Date created: 08/19/2018
 * Date last modified: 08/19/2018
 * 
 * Description:
 *     Problem #15: The program should output the probability
 *     of pulling out black balls from the box which contains K black,
 *     W white and B blue balls.
 * Note:
 *     According to probability theory, probability of some event A
 *     is equal to the quotient of the number of favorable results
 *     for event A and number of all possible outcomes.

 */


#include <stdio.h>

int main() {
    int K, W, B;
    printf("How many black balls? ");
    scanf("%d", &K);
    printf("How many white balls? ");
    scanf("%d", &W);
    printf("How many blue balls? ");
    scanf("%d", &B);
    printf("Probability of pulling out a black ball is %f %%.\n", (float)K / (K + W + B) * 100);
	return 0;
}
