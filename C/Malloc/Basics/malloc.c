#include <stdio.h>
#include <stdlib.h>


int main(int argv, int **argc){
    int x=3;
    int *i=malloc(sizeof(int));
    if (i == NULL){
        printf("Error");
        return 1;
    }
    int *j;
    int plithos;
    printf("Dose to plithos: ");
    scanf("%d", &plithos);
    
    int *arr=malloc(plithos*sizeof(int));
    if (arr == NULL){
        printf("Error");
        return 1;
    }
    for (int i=0;i<plithos;i++){
        arr[i]=i+1;
    }
    
    j=&x;
    *i=x;
    printf("%d", *i);
    printf("\n%d", *j);
    for (int i=0;i<plithos;i++){
        printf("\n%d", arr[i]);
    }
}