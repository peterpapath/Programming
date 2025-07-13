#include <stdio.h>
#include <stdlib.h>




int main(){
	int arr[3][5];

    for (int j=0; j<3; j++){
	    for (int i=0; i<5; i++){
            int x = rand();
            arr[j][i]=rand() % 10;
        }
    }
    
    for (int j=0; j<3; j++){
        for (int a=0; a<5; a++){
            printf("%d ", arr[j][a]);

        }
        printf("\n");
    }
    printf("\n\n");
    for (int j=0; j<5; j++){
        for (int i=0; i<3; i++){
            printf("%d ", arr[i][j]);

        }
        printf("\n");
    }
    printf("\n\n");
    // for (int j=0; j<3; j++){
    //         printf("%d ", *(arr+j));
    // }

    for (int i=0; i<15; i++){
        printf("%d ", *(*arr+i));

    }
   
}
