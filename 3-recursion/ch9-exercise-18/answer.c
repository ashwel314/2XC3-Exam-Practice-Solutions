#include <stdio.h>
#include <stdlib.h>

// Write a recursive version of the gcd function (see Exercise 3). Here’s the strategy to use for
// computing gcd(m, n): If n is 0, return m. Otherwise, call gcd recursively, passing n as
// the first argument and m % n as the second.

int gcd(int m, int n){
    if (n == 0){ // stops the recursive calls when n = 0
        return m;
    } else {
        return gcd(n, m % n);
    }
}

void main(){
    int m = 336, n = 252;
    int g = gcd(m,n);
    printf("GCD of %d and %d is: %d\n", m, n, g); // 84 is gcd
}