/*
 * Filename: problem_32.c
 * Project: C Language Workbook Problems
 * Section: Chapter 3
 * Author: Alexander Popp
 * Date created: 04/16/2019
 * Date last modified: 04/16/2019
 * 
 * Description:
 *     Problem #32: Write a program that enables the user to guess a randomly
 *     generated number in the interval from 1 to 100. User enters the number N,
 *     that represents the number of tries at guessing the number. When the user
 *     doesn't guess correctly, computer prints out whether the users guess was
 *     higher or lower than the randomly generated number. In the end, print out
 *     the number if the user failed to guess correctly.
 */


#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int number, tries, guess;
    int i = 1;

    srand(time(0));
    number = rand() % 100 + 1;
    printf("Guess a number from 1 to 100\n");
    printf("Enter the number of possible guesses >> ");
    scanf("%d", &tries);
    while(i <= tries) {
        printf("Guess #%d >> ", i);
        scanf("%d", &guess);
        if(guess < number) {
            printf("The number you guessed is smaller than my number.\n");
        } else if(guess > number) {
            printf("The number you guessed is greater than my number.\n");
        } else { 
            printf("You guessed correctly in %d tries!\n", i);
            return 0;
        }
        i++;
    }
    printf("You have failed to guess the number correctly!\n");
    return 0;
}
