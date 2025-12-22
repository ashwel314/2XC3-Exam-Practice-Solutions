#include <stdlib.h>
#include <stdio.h>

// Let DOUBLE be the following macro:
#define DOUBLE(x) 2*x
// (a) What is the value of DOUBLE(1+2)?
// (b) What is the value of 4/DOUBLE(2)?
// (c) Fix the definition of DOUBLE.

/*(a) 4
(b) 4
*/

/*(c)*/ #define FIXED_DOUBLE(x) (2*(x)) // putting brackets around x preserves the order of opperations

// testing it out
void main(){
    int a = DOUBLE(1+2);
    int b = 4/DOUBLE(2);
    printf("%d\n%d\n", a, b);

    int a_fixed = FIXED_DOUBLE(1+2);
    int b_fixed = 4/FIXED_DOUBLE(2);
    printf("%d\n%d\n", a_fixed, b_fixed);
}