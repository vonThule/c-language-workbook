/*
 * Filename: problem_31.c
 * Project: C Language Workbook Problems
 * Section: Chapter 2
 * Author: Alexander Popp
 * Date created: 08/24/2018
 * Date last modified: 08/25/2018
 * 
 * Description:
 *     Problem #31: Write a program that, for a given letter, prints out
 *     it's Morse code.
 */


#include <stdio.h>
#include <ctype.h>

int main() {
    char letter;
    printf("Input a letter >> ");
    scanf(" %c", &letter);
    switch(tolower(letter)) {
        case 'a': printf("A = '. -'\n"); break;
        case 'b': printf("B = '- . . .'\n"); break;
        case 'c': printf("C = '- . - .'\n"); break;
        case 'd': printf("D = '- . .'\n"); break;
        case 'e': printf("E = '.'\n"); break;
        case 'f': printf("F = '. . - .'\n"); break;
        case 'g': printf("G = '- - .'\n"); break;
        case 'h': printf("H = '. . . .'\n"); break;
        case 'i': printf("I = '. .'\n"); break;
        case 'j': printf("J = '. - - -'\n"); break;
        case 'k': printf("K = '- . -'\n"); break;
        case 'l': printf("L = '. - . .'\n"); break;
        case 'm': printf("M = '- -'\n"); break;
        case 'n': printf("N = '- .'\n"); break;
        case 'o': printf("O = '- - -'\n"); break;
        case 'p': printf("P = '. - - .'\n"); break;
        case 'q': printf("Q = '- - . -'\n"); break;
        case 'r': printf("R = '. - .'\n"); break;
        case 's': printf("S = '. . .'\n"); break;
        case 't': printf("T = '-'\n"); break;
        case 'u': printf("U = '. . -'\n"); break;
        case 'v': printf("V = '. . . -'\n"); break;
        case 'w': printf("W = '. - -'\n"); break;
        case 'x': printf("X = '- . . -'\n"); break;
        case 'y': printf("Y = '- . - -'\n"); break;
        case 'z': printf("Z = '- - . .'\n"); break;
        default: printf("Unrecognised input: %c\n", letter);
    }
	return 0;
}
