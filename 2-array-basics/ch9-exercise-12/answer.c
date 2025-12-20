#include <stdlib.h>
#include <stdio.h>

// Write the following function:
// double inner_product(double a[], double b[], int n);
// The function should return a[0] * b[0] + a[1] * b[1] + … + a[n-1] * b[n-1].

double inner_product(double a[], double b[], int n){
    double sum = 0; // initalizing the sum variable
    for (int i = 0; i<n; i++){ // looping through each item in the arrays
        sum += a[i] * b[i]; // adding the products to the sum
    }
    return sum;
}

void main(){
    // testing it out
    double a[] = {3.2, 4.3, 1.9};
    double b[] = {2.0, 2.0, 2.0};
    int n = 3;
    double sum = inner_product(a, b, n);
    printf("%lf\n", sum); //output is 18.8
} 