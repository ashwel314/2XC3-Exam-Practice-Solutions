#include <stdio.h>
#include <stdlib.h>

// Write the following function:
int *create_array(int n, int initial_value);
// The function should return a pointer to a dynamically allocated int array with n members,
// each of which is initialized to initial_value. The return value should be NULL if the
// array can’t be allocated.

int *create_array(int n, int inital_value){
    int *arr = malloc(n * sizeof(int));
    if (arr == NULL){ // returning NULL if malloc fails
        return NULL;
    }
    for(int i = 0; i<n; i++){ // initalizing all the values of the array
        arr[i] = inital_value;
    }
    return arr;
}