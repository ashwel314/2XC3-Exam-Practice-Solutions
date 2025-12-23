
// The following loop is supposed to delete all nodes from a linked list and release the memory
// that they occupy. Unfortunately, the loop is incorrect. Explain what’s wrong with it and
// show how to fix the bug.
for (p = first; p != NULL; p = p->next)
  free(p);

//##### ANSWER #####//
/* The thing that's wrong is it's freeing the current node but
nothing is keeping track of the next node. So when the loop starts
it'll free the first node but when it wants to go to the next node
it doesn't know where to go. The rest of the list is then left 
with no refrence to it which will cause a memory leak. To fix
this a pointer to the next node should be put in place so the rest
of the list isn't lost
*/

//fixed version
struct node *p_next;
for (p = first; p != NULL; p = p_next){
    p_next = p->next;
    free(p);
}