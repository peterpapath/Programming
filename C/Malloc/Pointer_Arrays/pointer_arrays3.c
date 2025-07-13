#include <stdio.h>
#include <stdlib.h>



// Function to fill the arrays
int fill_array(int arr[], int y,long seed){
    srand(seed);
    for (int i=0; i<y; i++){
        arr[i]=rand() % y;
    }
}



// Define the struct
typedef struct array_struct{
    int length;
    int *p;
}pinakes;


int main(int argc, char **argv){
    pinakes *arr;
    arr=malloc(3*sizeof(pinakes));
    if (arr == NULL){
        printf("Error 1a\n");
        return 1;
    }

    // pinakas 1
    printf("Give length of arr1: ");
    scanf("%d", &arr[0].length);
    printf("%d\n", arr[0].length);
    arr[0].p=malloc(arr[0].length*sizeof(int));
    if (arr[0].p == NULL){
        printf("Error 1b\n");
        return 1;
    }



    // pinakas 2
    printf("Give length of arr2: ");
    scanf("%d", &arr[1].length);
    printf("%d\n", arr[1].length);
    arr[1].p=malloc(arr[1].length*sizeof(int));
    if (arr[1].p == NULL){
        printf("Error 1b\n");
        return 1;
    }
    

    // pinakas 3
    printf("Give length of arr3: ");
    scanf("%d", &arr[2].length);
    printf("%d\n", arr[2].length);
    arr[2].p=malloc(arr[2].length*sizeof(int));
    if (arr[2].p == NULL){
        printf("Error 1b\n");
        return 1;
    }
    
    
    printf("Done allocating the length\n");

    

    // fill the array 1
    long seed1;
    printf("Give a seed for the first array: ");
    scanf("%d", &seed1);
    fill_array(arr[0].p, arr[0].length, seed1);

    for (int i=0;i<arr[0].length;i++){
        printf("%d\n", arr[0].p[i]);
    }


    // fill the array 2
    long seed2;
    printf("Give a seed for the second array: ");
    scanf("%d", &seed2);
    fill_array(arr[1].p, arr[1].length, seed2);

    for (int i=0;i<arr[1].length;i++){
        printf("%d\n", arr[1].p[i]);
    }


    // fill the array 3
    long seed3;
    printf("Give a seed for the third array: ");
    scanf("%d", &seed3);
    fill_array(arr[2].p, arr[2].length, seed3);

    for (int i=0;i<arr[2].length;i++){
        printf("%d\n", arr[2].p[i]);
    }

    free(arr[0].p);
    free(arr[1].p);
    free(arr[2].p);
    free(arr);
    return 0;
}