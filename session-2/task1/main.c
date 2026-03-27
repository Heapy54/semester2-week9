
#include <stdio.h>
#include <stdlib.h>

#include "node_structures.h"
#include "node.h"
#include "list_structures.h"
#include "list.h"

int main( void ) {

    // create an empty list
    List *list = createList();

    Node *n1, *n2;


    // add some nodes
    addNode(list,(Node *)NULL,1); // add at head - special case - pass NULL
    n1 = list->head;


    addNode(list,n1,12);
    n2 = n1->next;

    addNode(list,n2,14);

    // display the list
    traverseI(list->head);

    // add and delete more nodes with addNode() and deleteNode()
    Node *n3, *n4;
    n3 = n2->next;
    addNode(list,n3,56);

    n4 = n3->next;
    addNode(list,n4,156);

    traverseI(list->head);
    // deallocate deleted nodes - test with valgrind to check this

    n4 = n3->next;     // save next node
    n2->next = n4;     // unlink n3 from the list
    freeNode(n3); 

    traverseI(list->head);

    // free list memory
    freeNodes( list->head );
    free(list);

    return 0;
}
