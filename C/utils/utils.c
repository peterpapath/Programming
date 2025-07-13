#include <stdio.h>
#include <stdlib.h>
#include "utils.h"



int a_bubble_sort(int arr[], int y){
    int a;
    for (int i=0; i<y; i++){
        for (int j=0; j<y-1-i; j++){
            if (arr[j] > arr[j+1]){
                a=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=a;    
            }


        }
    }
}

int d_bubble_sort(int arr[], int y){
    int a;
    for (int i=0; i<y; i++){
        for (int j=0; j<y-1-i; j++){
            if (arr[j] < arr[j+1]){
                a=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=a;    
            }


        }
    }
}


int bsort(int arr[], int y,char c){
    if (c == 'a'){
        a_bubble_sort(arr,y);  
    }
    else if (c == 'd'){
        d_bubble_sort(arr,y);
    }
    else{
        printf("Wrong parameter on bsort");
    }
}



int func(int arr2[], int y, int num){
    for (int i=0; i<y; i++){
        if (arr2[i]==num){
            printf("Found at position: %d\n", i);
            return 0;
        }

    }
    printf("Not found");
}



int print_arr(int arr[],int y){
    for (int i=0; i<y; i++){
		printf("%d ", arr[i]);
    }
}


int fill_array(int arr[], int y,long seed){
    srand(seed);
    for (int i=0; i<y; i++){
        arr[i]=rand() % y;
    }
}