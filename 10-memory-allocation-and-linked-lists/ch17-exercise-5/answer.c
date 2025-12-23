
// Suppose that f and p are declared as follows:
struct {
  union {
    char a, b;
    int c;
  } d;
  int e[5];
} f, *p = &f;
// Which of the following statements are legal?
// (a) p->b = ' ';
// (b) p->e[3] = 10;
// (c) (*p).d.a = '*';
// (d) p->d->c = 20;

//##### ANSWER #####//
/*(b) as p is a pointer the arrow operater (->) works when accessing e.
(c) Since a isn't directly part of the struct but inside the union d
the union d needs to be accessed first to get to a.

(a) Isn't correct as to access b you first have to go through d because 
a, b and c aren't directly part of the struct but are part of union.
(d) Isn't correct as d isn't a pointer so using the arrow operater (->)
doesn't work and the dot (.) operater needs to be used instead. 
*/