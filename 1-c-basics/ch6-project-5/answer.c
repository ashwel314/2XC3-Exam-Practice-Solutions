#include <stdlib.h>
#include <stdio.h>

// Programming Project 1 in Chapter 4 asked you to write a program that displays a two-digit
// number with its digits reversed. Generalize the program so that the number can have one,
// two, three, or more digits. Hint: Use a do loop that repeatedly divides the number by 10,
// stopping when it reaches 0.

int main(){
    int num, digit;
    printf("Enter an integer: "); //prompting user for input
    scanf(" %d", &num);

    while(1){
        if(num == 0){ //loop finishes when there's no more digits left
            break;
        }
        digit = num % 10; // finding the right most digit
        printf("%d", digit); //printing that out
        num = num/10; //shifting the number over 1 decimal place
    }
    puts("");
    return EXIT_SUCCESS;
}