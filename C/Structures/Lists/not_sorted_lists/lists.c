#include <stdio.h>
#include <stdlib.h>

typedef struct node {
    int data;
    struct node *next;
} Node;



void print_list(Node *tmp_list){
    while (tmp_list->next != NULL){
        printf("%d\n", tmp_list->data);
        tmp_list=tmp_list->next;
    }
    printf("%d\n", tmp_list->data);
}


Node *push(Node *tmp_list, int num){
    Node *tmp=(Node *)malloc(sizeof(Node));
    if (tmp == NULL){
        printf("Error\n");
        exit(1);
    }
    tmp->data=num;
    tmp->next=NULL;
    if (tmp_list == NULL){
        return tmp;
    }
    Node *work_list=tmp_list;
    while (work_list->next != NULL){
        work_list=work_list->next;
    }
    work_list->next=tmp;
    return tmp_list;
}


Node *delete(Node *tmp_list, int num){
    if (tmp_list == NULL){
        return NULL;
    }
    Node *tmp=tmp_list;
    if (tmp->data == num){
        tmp_list=tmp->next;
        free(tmp);
        return tmp_list;
    }
    while (tmp->next != NULL){
        if (tmp->next->data == num){
            Node *to_delete = tmp->next;
            tmp->next = to_delete->next;
            free(to_delete);
            break;
        }
        tmp=tmp->next;

    }
    return tmp_list;
}

void search(Node *tmp_list, int num){
    while (tmp_list != NULL){
        if (tmp_list->data == num){
            printf("Found!\n");
            return;
        }
        tmp_list=tmp_list->next;
    }
    printf("Not found!");
    

}


void free_structs(Node *tmp_list){
    Node *tmp=NULL;
    while (tmp_list->next != NULL){
        tmp=tmp_list;
        tmp_list=tmp_list->next;
        free(tmp);
    }
    free(tmp_list);
}

int main(int argc, char **argv){
    Node *list=NULL;
    list=push(list, 5);
    list=push(list, 10);
    list=push(list, 15);
    list=delete(list, 10);
    printf("\n");
    print_list(list);
    search(list, 15);
    free_structs(list);
    return 0;
}