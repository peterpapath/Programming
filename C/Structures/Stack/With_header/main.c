#include <stdio.h>
#include <stdlib.h>
#include "stack.h"



int main(int argc, char **argv){
    Node *stack=NULL;    
    stack=push(stack, 10);
    stack=push(stack, 15);
    peek(stack);
    stack = pop(stack);
    peek(stack);
    stack = pop(stack);
    peek(stack);


    return 0;
}