/*fgetc()– This function is used to read a single character from the file.
fgets()– This function is used to read strings from files.
fscanf()– This function is used to read formatted input from a file.
fread()– This function is used to read the block of raw bytes from files. This is used to read binary files.*/

/*• Our Definition:
– performs lexical analysis
– Reads characters from the input stream one at a
time until a single token is found, and returns it.

• For our purposes, called by parser, but can
be used generically on its own for other
purposes.*/

/*• Using a set of rules, matches input characters to
tokens.

• Tokens include:
– keywords void class this int
– punctuation symbols: = - >= {
– identifiers
– literals 1.2 123 “hello”

• Lexer will search the patterns in the four
categories and return the pattern that matches

• Along the way, discards characters that
don’t belong to a token.

• Includes:
– comments
– white space, \n \t, space
– illegal characters: $ % #

• Reports lexical errors

• This includes:
– illegal characters
– unteminated comments
– unterminated string literals
– literals too long*/

//https://web.cs.ucdavis.edu/~peisert/teaching/cse131a/lecture_slides/131a_lecture1b.pdf

// C program to implement
// the above approach
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
 
// Driver code
int main()
{
    FILE* ptr;
    char ch;
 
    // Opening file in reading mode
    ptr = fopen("test.txt", "r");
 
    if (NULL == ptr) {
        printf("file can't be opened \n");
    }
 
    printf("content of this file are \n");
 
    // Printing what is written in file
    // character by character using loop.
    do {
        ch = fgetc(ptr);
        printf("%c", ch);
 
        // Checking if character is not EOF.
        // If it is EOF stop reading.
    } while (ch != EOF);
 
    // Closing the file
    fclose(ptr);
    return 0;
}