// Graph Representation with
// Dynamic (The length of all arrays is not known)
// Adjacency Arrays

#include <stdio.h>
#include <stdlib.h>
#include <string.h>


typedef struct struct_graph{
    int node;
    int length;
    int *p;
}Graph;



int main(int argc, char **argv){
    Graph *graph;
    FILE *f;
    char *data;
    size_t size = 0;
    int read;


    f = fopen("graph.txt", "r");
    if (f == NULL) {
        printf("The file is not opened.");         
        return -1;
    }


    int graph_length=0;
    while ((read = getline(&data,&size,f)) != -1){
        graph_length++;
    }
    printf("Grammes: %d\n", graph_length);
    graph=malloc(graph_length*sizeof(Graph));
    if (graph == NULL){
        printf("Error 0\n");
        return 1;
    }
    rewind(f);

    int Number, Length;
    int i=0;
    char *save_Str;
    while ((read = getline(&data,&size,f)) != -1){
        save_Str=strtok(data, " ");
        Number =atoi(save_Str);
        graph[i].node=Number;
        save_Str=strtok(NULL, " ");
        Length =atoi(save_Str);
        graph[i].length=Length;
        graph[i].p=malloc(graph[i].length*sizeof(int));
        if (graph[i].p == NULL){
            printf("Error\n");
            return 1;
        }
        save_Str = strtok(NULL, " ");
        int j=0;
        while (save_Str != NULL) {
            graph[i].p[j]=atoi(save_Str);
            save_Str = strtok(NULL, " ");
            j++;
          }
        
        i++;    
    }

    printf("\n\n");
    for (int i=0;i<graph_length;i++){
        printf("node  %d  \t-> ", graph[i].node);
        for (int a=0;a<graph[i].length;a++){  
            printf("%d ", graph[i].p[a]);
        }
        printf("\n");
    }


    fclose(f);
    return 0;
}