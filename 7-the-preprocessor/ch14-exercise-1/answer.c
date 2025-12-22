#include <stdlib.h>
#include <stdio.h>

// Write parameterized macros that compute the following values.
// (a) The cube of x.
// (b) The remainder when n is divided by 4.
// (c) 1 if the product of x and y is less than 100, 0 otherwise.
// Do your macros always work? If not, describe what arguments would make them fail.

/*(a)*/ #define CUBE(x) ((x)*(x)*(x))
/*(b)*/ #define REMAINDER(n) ((n)%4)
/*(c)*/ #define PRODUCT(x, y) (((x)*(y))< 100 ? 1 : 0)

/*They all fail when an increment is put in as a parameter like i++ or i--*/