#include <stdio.h>
#include <stdlib.h>
#include "stack.h"




Node *push(Node *tmp_stack, int num){
    Node *tmp=(Node*)malloc(sizeof(Node));
    if (tmp == NULL){
        printf("Error\n");
        exit(1);
    }
    tmp->item=num;
    tmp->previous=tmp_stack;
    return tmp;

}

void peek(Node *tmp_stack){
    if (tmp_stack == NULL){
        printf("Empty\n");
    }
    else{
        printf("%d\n", tmp_stack->item);
    }
}

Node *pop(Node *tmp_stack){
    if (tmp_stack->previous == NULL){
        return NULL;
    }
    else{
        Node *tmp= tmp_stack->previous;
        free(tmp_stack);
        return tmp;
    }
}