#include <stdio.h>
#include <stdlib.h>

// Write the following function:
// void swap(int *p, int *q);
// When passed the addresses of two variables, swap should exchange the values of the variables:
// swap(&i, &j);   /* exchanges values of i and j */

void swap(int *p, int *q){
    int p_hold = *p; // holding the value p points to
    *p = *q;
    *q = p_hold; // have to use p_hold because p was reassigned already
}
