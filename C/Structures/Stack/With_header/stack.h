#ifndef __STACK_H__
#define __STACK_H__

typedef struct node{
    int item;
    struct node *previous;
} Node;

Node *push(Node *tmp_stack, int num);

void peek(Node *tmp_stack);

Node *pop(Node *tmp_stack);

#endif