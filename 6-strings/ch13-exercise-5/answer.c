#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>

// (a) Write a function named capitalize that capitalizes all letters in its argument. The
// argument will be a null-terminated string containing arbitrary characters, not just letters.
// Use array subscripting to access the characters in the string. Hint: Use the toupper function
// to convert each character to upper-case.
// (b) Rewrite the capitalize function, this time using pointer arithmetic to access the
// characters in the string.

// (a)
void capitalize(char *str){
    for(int i = 0; i < strlen(str); i++){ // iterating over the string
        str[i] = toupper(str[i]); // reassigning the char to be uppercase
    }
}

// (b)
void capitalize_pointer(char *str){
    while(*str != '\0'){ // going until \0 which signals the end of the string
        *str = toupper(*str) ;
        str++;
    }
}
