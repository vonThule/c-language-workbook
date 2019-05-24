/*
 * Filename: problem_52.c
 * Project: C Language Workbook Problems
 * Section: Chapter 3
 * Author: Alexander Popp
 * Date created: 05/24/2019
 * Date last modified: 05/24/2019
 * 
 * Description:
 *     Problem #52: Write a program that prints out a table of temperature values in Celsius and
 *     Fahrenheit for the values val1 to val2 degrees with a step of m.
 */


#include <stdio.h>

int main() {
    int val1, val2, m;
    float celsius, fahr;
    
    printf("Enter value 1 >> ");
    scanf("%d", &val1);
    printf("Enter value 2 >> ");
    scanf("%d", &val2);
    printf("Enter step >> ");
    scanf("%d", &m);

    celsius = val1;
    printf(" C\tF\n");
    while(celsius <= val2) {
        fahr = (9.0 / 5.0) * celsius + 32.0;
        printf("%3.0f %6.1f\n", celsius, fahr);
        celsius += m;
    }

    return 0;
}
