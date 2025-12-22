#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Let f be the following function:
int f(char *s, char *t)
{
  char *p1, *p2;
  for (p1 = s; *p1; p1++) {
    for (p2 = t; *p2; p2++)
      if (*p1 == *p2) break;
    if (*p2 == '\0') break;
  }
  return p1 - s;
}
// (a) What is the value of f("abcd", "babc")?
// (b) What is the value of f("abcd", "bcd")?
// (c) In general, what value does f return when passed two strings s and t?

//##### ANSWER #####//
/*(a) It'll return 3
(b) It'll return 0
(c) In general f returns the index of the first letter in s that doesn't occur in t. 
*/

// can test out part a and b
void main(){
    int a = f("abcd", "babc");
    int b = f("abcd", "bcd");
    printf("%d\n%d\n", a, b);
}