
#include <stdio.h>
#include <stdlib.h>

#include "node_structures.h"
#include "node.h"
#include "queue_structures.h"
#include "queue.h"

int main( void ) {

    // create an empty queue
    Queue *queue = createQueue();
    join(queue, 10);
    join(queue, 1);
    join(queue, 17);

    // test join 
    // - use traverseI() to display the nodes
    traverseI(queue->front);
    // - which pointer do you pass to traverseI(): front or back?

    // test leave 
    freeNode(leave(queue));
    traverseI(queue->front);
    // - take care to free detached memory

    // free queue memory
    freeNodes( queue->front );
    // free queue
    free(queue);

    return 0;
}
