#include <stdlib.h>
#include <stdio.h>

// Rewrite the following function to use pointer arithmetic instead of array subscripting. (In
// other words, eliminate the variables i and j and all uses of the [] operator.) Use a single
// loop instead of nested loops.
#define LEN 3 // defining for testing
int sum_two_dimensional_array(const int a[][LEN], int n){
    int sum = 0;
    for(const int *p = &a[0][0]; p < &a[0][0]+(n*LEN); p++){
        sum += *p;
    }
    return sum;
}

int main(){
    // testing the method 
    int n = 3;
    int a[3][LEN] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    int sum = sum_two_dimensional_array(a, n);

    printf("Sum = %d\n", result);

    return 0;
}
