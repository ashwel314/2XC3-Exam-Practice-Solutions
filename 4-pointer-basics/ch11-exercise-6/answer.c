#include <stdio.h>
#include <stdlib.h>

// Write the following function:
void find_two_largest(int a[], int n, int *largest, int *second_largest);
// When passed an array a of length n, the function will search a for its largest and second
// largest elements, storing them in the variables pointed to by largest and
// second_largest, respectively.

void find_two_largest(int a[], int n, int *largest, int *second_largest){
    // for this question we're going to assume n >= 2

    //assigning largest and second largest inital values
    *largest = a[0];
    *second_largest = a[1];

    //use for loop to go though the array
    for (int i = 1; i<n; i++){// starting at index 1 as we need to compare 0 to 1
        if (a[i] > *largest){
            *second_largest = *largest; // reassign second largest first so we don't lose the previous largest vaule
            *largest = a[i];
        } else if(a[i] > *second_largest){// if a[i] > second largest but less than largest
            *second_largest = a[i]; 
        }
    }
}

