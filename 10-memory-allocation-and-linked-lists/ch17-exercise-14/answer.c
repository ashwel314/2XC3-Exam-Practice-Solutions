#include <stdio.h>
#include <stdlib.h>

// Modify the delete_from_list function (Section 17.5) so that its first parameter has
// type struct node ** (a pointer to a pointer to the first node in a list) and its return type is
// void. delete_from_list must modify its first argument to point to the list after the
// desired node has been deleted.

// From section 17.5
 void delete_from_list(struct node **list, int n){
    struct node *cur = *list, *prev = NULL;
    while (cur != NULL && cur -> value != n){ // moving along the list until the value matches n 
        prev = cur;
        cur = cur -> next;
    }
    // special cases
    if(curr == NULL){// if no n matched exits the function
        return; 
    }

    if(prev == NULL){ // if n was in the first node
        *list = cur->next;
    } else { // otherwise n was found and it isn't the first node
        prev->next = cur->next; //reassigning the next so when cur is deleted the rest of the list isn't lost
    }    
    free(curr);
}