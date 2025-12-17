#include <stdlib.h>
#include <stdio.h>

// Write a program that asks the user to enter a fraction, then reduces the fraction to lowest
// terms:
//
// Enter a fraction: 6/12
// In lowest terms: 1/2
//
// Hint: To reduce a fraction to lowest terms, first compute the GCD of the numerator and
// denominator. Then divide both the numerator and denominator by the GCD.

int main(){
    int denom, num, m, n, r; // initalizing the variables
    printf("Enter a fraction: "); //prompt user for input
    scanf(" %d/%d", &num, &denom);
    //copying denom and num over to m and n so we can find the GCD
    m = denom;
    n = num;
    //use same method as Q2 to find the GCD
    while(1){
        r = m % n;
        m = n;
        n = r;
        if(n == 0){
            break;
        }
    }
    //reducing the fraction
    denom = denom/m;
    num = num/m;
    printf("In lowest terms: %d/%d\n", num, denom);
    return EXIT_SUCCESS;
}