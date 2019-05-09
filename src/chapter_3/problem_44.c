/*
 * Filename: problem_44.c
 * Project: C Language Workbook Problems
 * Section: Chapter 3
 * Author: Alexander Popp
 * Date created: 05/09/2019
 * Date last modified: 05/09/2019
 * 
 * Description:
 *     Problem #44: Write a program that encrypts the input text with
 *     a XOR algorithm. Enter the letter of the cypher and than use it
 *     to encrypt.
 * Note: The XOR algorithm is based on encrypting the text in such a way
 *       that the XOR operation is done on every character by using the
 *       given cypher.
 */


#include <stdio.h>

int main() {
    char input, cypher;
    printf("Enter a letter cypher >> ");
    scanf(" %c", &cypher);
    while(getchar() != '\n');
    while((input = getchar()) != '\n') {
        putchar(input ^ cypher);
    }
    printf("\n");    
    return 0;
}
