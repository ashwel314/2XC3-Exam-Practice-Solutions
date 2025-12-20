#include <stdio.h>
#include <stdlib.h>

// Consider the following “mystery” function:
void pb(int n)
{
  if (n != 0) {
    pb(n / 2);
    putchar('0' + n % 2);
  }
}
// Trace the execution of the function by hand. Then write a program that calls the function,
// passing it a number entered by the user. What does the function do?

// ##### ANSWER #####//
// It's printing the number n in binary because the putchar decided if it's a 1 or 0.
// It needs to print the most signicant bit first so the recursive function call 
// is first.

void main(){
    // testing it out
    int n = 5;
    pb(n); // 101
}