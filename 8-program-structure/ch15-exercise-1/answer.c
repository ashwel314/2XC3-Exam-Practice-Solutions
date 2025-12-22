
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

//##### ANSWER #####//
/*(a) Supports multiple people working on the same program. Multiple people can be working 
on different files but still working towards the same goal. This reduces merge conflicts 
when branches are being merged.
Functions can be debugged more easily with the more modular design.

(b) A more complex building process as there's multiple files to link together
and can become confusing really fast. 
Less beginner friendly due to its complexity. 
*/