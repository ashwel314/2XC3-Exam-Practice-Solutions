// We discussed using the expression sizeof(a) / sizeof(a[0]) to calculate the 
// number of elements in an array. The expression sizeof(a) / sizeof(t), where t is the type
// of a’s elements, would also work, but it’s considered an inferior technique. Why?

//##### ANSWER #####//
/* The first method sizeof(a) / sizeof(a[0]) is better as it is a more general version
of the second method sizeof(a) / sizeof(t). In the second method you must know of what 
type the array 'a' is whereas the first method you don't need to know and it doesn't need
to be hardcoded in. */