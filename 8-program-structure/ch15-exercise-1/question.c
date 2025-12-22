
// Section 15.1 listed several advantages of dividing a program into multiple source files.
// (a) Describe several other advantages.
// (b) Describe some disadvantages.

// 15.1 advantages
// Grouping related functions and variables into a single file helps clarify the
// structure of the program.

// Each source file can be compiled separately—a great time-saver if the program
// is large and must be changed frequently (which is common during program development).

// Functions are more easily reused in other programs when grouped in separate
// source files. In our example, splitting off stack.c and token.c from the
// main function makes it simpler to reuse the stack functions and token func
// tions in the future.