
// The following loop is supposed to delete all nodes from a linked list and release the memory
// that they occupy. Unfortunately, the loop is incorrect. Explain what’s wrong with it and
// show how to fix the bug.
for (p = first; p != NULL; p = p->next)
  free(p);