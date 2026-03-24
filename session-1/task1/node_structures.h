#ifndef _NODE_STRUCTURES_H_



typedef struct _data {
    int value;
} Data;

typedef struct _node {
    struct _data *data;
    struct _node *next;    // self-referential pointer to Node
} Node;

#endif