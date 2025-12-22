#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// What will be the value of the string str after the following statements have been executed?
// strcpy(str, "tire-bouchon");
// strcpy(&str[4], "d-or-wi");
// strcat(str, "red?");

//##### ANSWER #####//
/*The first one will copy the string "tire-bouchon" into str 
though if the length of str is too short the behaviour is undefined.
In the second one str is definitely too short for the source string 
so the behaviour is undefined. The third one will add the string
"red?" to the end of str.
*/

void main(){
    char str1[20] = "Hello";
    strcpy(str1, "tire-bouchon");
    printf("%s\n", str1); // will print "tire-bouchon"
    
    char str2[20];
    strcpy(&str2[4], "d-or-wi"); // not enough space in str so undefined behaviour
    printf("%s\n", str2); // undefined

    char str3[20] = "Blue ";
    strcat(str3, "red?");
    printf("%s\n", str3);// will print "Blue red?"
}