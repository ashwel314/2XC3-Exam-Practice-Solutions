#include <stdlib.h>
#include <stdio.h>

// Write a program that asks the user to enter two integers, then calculates and displays their
// greatest common divisor (GCD):
//
// Enter two integers: 12 28
// Greatest common divisor: 4
//
// Hint: The classic algorithm for computing the GCD, known as Euclid’s algorithm, goes as
// follows: Let m and n be variables containing the two numbers. If n is 0, then stop: m con
// tains the GCD. Otherwise, compute the remainder when m is divided by n. Copy n into m
// and copy the remainder into n. Then repeat the process, starting with testing whether n is 0.

int main(){
    int m, n, r; //initalizing variables
    // prompt user for input
    printf("Enter two integers: ");
    scanf(" %d %d", &m, &n);
    while(1){
        r = m % n; //computing the remainder
        //copying the variables over
        m = n;
        n = r;
        if(n == 0){ //finished when n = 0 
            break;
        }
    }
    //printing out the answer
    printf("Greatest common divisor: %d\n", m);
    return EXIT_SUCCESS;
}