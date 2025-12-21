#include <stdlib.h>
#include <stdio.h>

// Rewrite the following function to use pointer arithmetic instead of array subscripting. (In
// other words, eliminate the variable i and all uses of the [] operator.) Make as few changes
// as possible.
int sum_array(const int a[], int n){
    int sum;
    sum = 0;
    for (const int *p = a; p < a+n; p++){// p starts at a[0] then moves forward after each loop
        sum += *p; // adding the value that p is pointing to 
    }
    return sum;
}