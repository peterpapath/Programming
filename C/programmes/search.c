#include <stdio.h>
#include <stdlib.h>


int func(int arr2[], int y, int num){
    for (int i=0; i<y; i++){
        if (arr2[i]==num){
            printf("Found at position: %d\n", i);
            return 0;
        }

    }
    printf("Not found");
}



int main(){
    int arr[15];
    int num;
    for (int i=0; i<15; i++){
        arr[i]=rand() % 20;
    }
    
    for (int i=0; i<15; i++){
        printf("%d ", arr[i]);

    }  
    scanf("%d", &num);
    func(arr, 15, num);    


}
