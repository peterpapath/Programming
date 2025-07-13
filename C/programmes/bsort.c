#include <stdio.h>
#include <stdlib.h>


int bsort(int arr[], int y){
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


int main(){
    int arr[15];
    for (int i=0; i<15; i++){
        arr[i]=rand() % 20;
    }
    
    for (int i=0; i<15; i++){
        printf("%d ", arr[i]);
        // arr[i]=150-i;
    } 

    
    bsort(arr, 15);


    printf("\n\n");
    for (int i=0; i<15; i++){
        printf("%d ", arr[i]);

    }

}
