#include <stdlib.h>
#include <stdio.h>
#include <string.h>

// Write a function named censor that modifies a string by replacing every occurrence of
// foo by xxx. For example, the string "food  fool" would become "xxxd  xxxl". Make
// the function as short as possible without sacrificing clarity.

void censor(char *str){
    while((str = strstr(str, "foo")) != NULL){// strstr function returns NULL if the substring isn't found
        // reassigning the 3 letters of 'foo'
        str[0] = 'x';
        str[1] = 'x';
        str[2] = 'x';
        str += 3; // skipping over the 3 reassigned letters
    }
}
