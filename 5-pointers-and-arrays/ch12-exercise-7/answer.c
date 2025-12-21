#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>

// Write the following function:
bool search(const int a[], int n, int key);
// a is an array to be searched, n is the number of elements in the array, and key is the search
// key. Search should return true if key matches some element of a, and false if it
// doesn’t. Use pointer arithmetic—not subscripting—to visit array elements.

bool search(const int a[], int n, int key){
    // use same method as exercise 6 to traverse the array using pointers
    for (const int *p = a; p < a+n; p++){
        if (*p == key){ // if the key is found
            return true;
        }
    }
    // if it gets to the end of the loop then the key wasn't found
    return false;
}

