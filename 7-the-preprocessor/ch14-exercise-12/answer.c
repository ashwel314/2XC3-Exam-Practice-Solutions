
// Suppose that the macro M has been defined as follows:
#define M 10
// Which of the following tests will fail?
// (a) #if M
// (b) #ifdef M
// (c) #ifndef M
// (d) #if defined(M)
// (e) #if !defined(M)

//##### ANSWER #####//
/*c and e fail because they're checking when M isn't defined
but M is always defined so they'll fail.*/