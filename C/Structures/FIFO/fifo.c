#include <stdio.h>
#include <stdlib.h>

typedef struct node{
    int item;
    struct node *next;
} Node;

Node *push(Node *tmp_fifo, int num){
    Node *tmp= (Node*)malloc(sizeof(Node));
    if (tmp == NULL){
        printf("Error\n");
        exit(1);
    }
    tmp->item=num;
    tmp->next=tmp_fifo;
    return tmp;
}

void peek(Node *tmp_fifo){
    while (tmp_fifo->next != NULL){
        tmp_fifo=tmp_fifo->next;
    }
    printf("%d\n", tmp_fifo->item);

}

void pop(Node *tmp_fifo){
    Node *prev_node=tmp_fifo;
    tmp_fifo=tmp_fifo->next;
    while (tmp_fifo->next != NULL){
        tmp_fifo=tmp_fifo->next;
        prev_node=prev_node->next;;
    }
    free(tmp_fifo);
    prev_node->next=NULL;
}

void free_structs(Node *tmp_fifo){
    Node *tmp=NULL;
    while (tmp_fifo->next != NULL){
        tmp=tmp_fifo;
        tmp_fifo=tmp_fifo->next;
        free(tmp);
    }
    free(tmp_fifo);
}



int main(int argc, char **argv){
    Node *fifo=NULL;
    fifo=push(fifo, 5);
    fifo=push(fifo, 10);
    fifo=push(fifo, 15);
    peek(fifo);
    fifo=push(fifo, 20);
    peek(fifo);
    pop(fifo);
    peek(fifo);

    free_structs(fifo);    
}