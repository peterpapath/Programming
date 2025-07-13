#include <stdio.h>
#include <stdlib.h>






int main(){
    int sum;
    int gin;
    int arr[5][5];

    for (int j=0; j<5; j++){
	    for (int i=0; i<5; i++){
            int x = rand();
            arr[j][i]=rand() % 10;
        }
    }
    
    for (int j=0; j<5; j++){
        for (int a=0; a<5; a++){
            printf("%d ", arr[j][a]);

        }
        printf("\n");
    }
    // printf("\n\n");
    for (int i=0; i<5; i++){
                // printf("%d ", arr[i][i]);

    }
    // printf("\n\n");


    gin=1;
    sum=0;
    for (int i=0; i<5; i++){
        // printf("%d ", arr[i][4-i]);
        sum+=arr[i][4-i];
        gin*=arr[i][4-i];
    }
    // printf("\n%d", sum);
    // printf("\n%d", gin);

    printf("\n\n");
    
    // int metr=5;
    // int metr2=0;
    // for (int i=0; i<5; i++){
    //     for (int a=0; a<metr; a++){
    //         printf("%d ", arr[i][a+metr2]);
    //     }
    //     printf("\n");
    //     metr--;
    //     metr2++;
    // }


    for (int i=0; i<5; i++){
        for (int a=0; a<=i; a++){
            printf("%d ", arr[i][a]);
        }
        printf("\n");
    }
   
}
