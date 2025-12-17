#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>

// Write a program that finds the largest in a series of numbers entered by the user.
// The program must prompt the user to enter numbers one by one. When the user enters 0 or a 
// negative number, the program must display the largest nonnegative number entered:
//
// Enter a number: 60
// Enter a number: 38.3
// Enter a number: 4.89
// Enter a number: 100.62
// Enter a number: 75.2295
// Enter a number: 0
// The largest number entered was 100.62
//
// Notice that the numbers aren’t necessarily integers.

int main(){
    double hold, largest = 0; // initalizing the hold and largest variable 
    int check; // check variable for user input
    char ch; // for clearing the buffer in case of a bad input
    // creating loop to continously get input
    while (true){
        printf("Enter a number: "); // prompt user for input
        check = scanf(" %lf", &hold); // assigning input for comparison
        
        if (check == 0){
            while ((ch = getchar()) != '\n') // clearing the buffer in case of bad input
            continue;
        } 

        if (hold <= 0){ // break condition if the input is a 0 or a negative 
            break;
        }

        if (hold > largest){ // reassigning largest to actually be the largest
            largest = hold;
        }
    }

    printf("The largest number entered was %lf\n", largest); // telling the uder the largest number entered

    return EXIT_SUCCESS;
}