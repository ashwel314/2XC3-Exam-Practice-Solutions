#include <stdlib.h>
#include <stdio.h>

// Write the following function:
struct node *find_last(struct node *list, int n);
// The list parameter points to a linked list. The function should return a pointer to the last
// node that contains n; it should return NULL if n doesn’t appear in the list. Assume that the
// node structure is the one defined in Section 17.5.

// node from section 17.5
struct node {
    int value;           /* data stored in the node  */
    struct node *next;   /* pointer to the next node */
};

struct node *find_last(struct node *list, int n){
    
}