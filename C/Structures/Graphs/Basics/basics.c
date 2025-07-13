// Graph Representation with
// Relatively (The length of the array is known in advance) Dynamic
// Adjacency Arrays


#include <stdio.h>
#include <stdlib.h>


// Define the struct
typedef struct graph_struct{
    int node;
    int length;
    int *p;
}Graph;


int main(int argc, char **argv){
    Graph *graph;
    graph=malloc(4*sizeof(Graph));
    if (graph == NULL){
        printf("Error 0\n");
        return 1;
    }

    // pinakas 1
    graph[0].node=2;
    graph[0].length=2;
    graph[0].p=malloc(graph[0].length*sizeof(int));
    if (graph[0].p == NULL){
        printf("Error 1\n");
        return 1;
    }
    graph[0].p[0]=3;
    graph[0].p[1]=5;


    // pinakas 2
    graph[1].node=3;
    graph[1].length=2;
    graph[1].p=malloc(graph[1].length*sizeof(int));
    if (graph[1].p == NULL){
        printf("Error 2\n");
        return 1;
    }
    graph[1].p[0]=5;
    graph[1].p[1]=7;



    // pinakas 3
    graph[2].node=5;
    graph[2].length=1;
    graph[2].p=malloc(graph[2].length*sizeof(int));
    if (graph[2].p == NULL){
        printf("Error 3\n");
        return 1;
    }
    graph[2].p[0]=7;




    // pinakas 4
    graph[3].node=7;
    graph[3].length=0;
    graph[3].p=NULL;

    // Graph representation
    for (int i=0;i<4;i++){
        printf("node %d -> ", graph[i].node);
        for (int a=0;a<graph[i].length;a++){  
            printf("%d ", graph[i].p[a]);
        }
        printf("\n");
    } 

    for (int i=0;i<4;i++){
        free(graph[i].p);
    } 
    free(graph);   

    return 0;
}