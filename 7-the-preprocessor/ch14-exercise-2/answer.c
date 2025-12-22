#include <stdlib.h>
#include <stdio.h>

// Write a macro NELEMS(a) that computes the number of elements in a one-dimensional
// array a. Hint: See the discussion of the sizeof operator in Section 8.1.

#define NELEMS(a) (sizeof(a)/sizeof((a)[0])) 

// using the standard sizeof(a)/sizeof(a[0]) we must pur brackets around
// any occurance of a in macros