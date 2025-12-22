
// Which of the following should not be put in a header file? Why not?
// (a) Function prototypes
// (b) Function definitions
// (c) Macro definitions
// (d) Type definitions

//##### ANSWER #####//
/*
Function definitions as this can cause multiple definitions of a function
which causes linker errors. It violates the One Definition Rule in C. 
*/