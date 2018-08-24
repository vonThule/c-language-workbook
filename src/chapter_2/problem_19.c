/*
 * Filename: problem_19.c
 * Project: C Language Workbook Problems
 * Section: Chapter 2
 * Author: Alexander Popp
 * Date created: 08/24/2018
 * Date last modified: 08/24/2018
 * 
 * Description:
 *     Problem #19: Write a program that calculates the largest of
 *     given four numbers.
 */


#include <stdio.h>

int main() {
    int n1, n2, n3, n4;
    int split1, split2, largest;
    printf("Enter four integers >> ");
    scanf("%d%d%d%d", &n1, &n2, &n3, &n4);
    split1 = (n1 > n2 ? n1 : n2);
    split2 = (n3 > n4 ? n3 : n4);
    largest = (split1 > split2 ? split1 : split2);
    printf("The largest number is: %d.\n", largest);
	return 0;
}
