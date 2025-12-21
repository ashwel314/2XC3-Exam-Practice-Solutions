#include <stdio.h>
#include <stdlib.h>

// Write the following function:
double inner_product(const double *a, const double *b, int n);
// a and b both point to arrays of length n. The function should return a[0] * b[0] +
// a[1] * b[1] + … + a[n-1] * b[n-1]. Use pointer arithmetic—not subscripting—to
// visit array elements

double inner_product(const double *a, const double *b, int n){
    // remember a[] is the same as *a in terms of types
    // so we can traverse a and b like normal using pointers
    const double *p = a, *q = b;
    double product = 0;
    for(p; p < a+n; p++){
        product += (*p) * (*q);
        q++; // since the loop is traversing p we need to keep up with q
    }
    return product;
}
