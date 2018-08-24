/*
 * Filename: problem_13.c
 * Project: C Language Workbook Problems
 * Section: Chapter 2
 * Author: Alexander Popp
 * Date created: 08/24/2018
 * Date last modified: 08/24/2018
 * 
 * Description:
 *     Problem #13: Write a program that allows a user to take three
 *     guesses at a random number from the interval of 1 to 10.
 *     If the user guesses wrong, notify him whether his guess is lower
 *     or higher than the unknown number. After three incorrect guesses
 *     display the unknown number.
 */


#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int number, guess;

    srand(time(0));
    number = rand() % 10 + 1;

    /* As functions are not covered until chapter 4
     * the following 10 lines will be repeated 3 times.*/
    printf("Guess a number from 1 to 10 >> ");
    scanf("%d", &guess);
    if (guess == number) {
        printf("You guessed correct! Goodbye...\n");
        return 0;
    } else if (guess > number) {
        printf("You guessed higher.\n");
    } else {
        printf("You guessed lower.\n");
    }

    printf("Guess a number from 1 to 10 >> ");
    scanf("%d", &guess);
    if (guess == number) {
        printf("You guessed correct! Goodbye...\n");
        return 0;
    } else if (guess > number) {
        printf("You guessed higher.\n");
    } else {
        printf("You guessed lower.\n");
    }

    printf("Guess a number from 1 to 10 >> ");
    scanf("%d", &guess);
    if (guess == number) {
        printf("You guessed correct! Goodbye...\n");
        return 0;
    } else if (guess > number) {
        printf("You guessed higher.\n");
    } else {
        printf("You guessed lower.\n");
    }

    printf("You have failed to guess the number correctly! The number was: %d.\nGoodbye...\n", number);

	return 0;
}
