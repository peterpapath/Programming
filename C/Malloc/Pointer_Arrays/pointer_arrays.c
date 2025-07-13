#include <stdio.h>
#include <stdlib.h>



// Function to fill the arrays
int fill_array(int arr[], int y,long seed){
    srand(seed);
    for (int i=0; i<y; i++){
        arr[i]=rand() % 10;
    }
}



// Define the struct

typedef struct array_struct{
    int length;
    int array[];
    // int *p;
}pinakes;


int main(int argc, char **argv){

    // pinakas 2
    pinakes *arr1;
    arr1=malloc(sizeof(pinakes));
    if (arr1 == NULL){
        printf("Error 1a\n");
        return 1;
    }
    scanf("%d", &arr1[0].length);
    int sz1=arr1[0].length;
    // free(arr1);
    printf("%d\n", arr1[0].length);
    printf("%d\n", sz1);
    printf("Check 1\n");
    arr1=malloc(arr1[0].length*sizeof(pinakes));
    if (arr1 == NULL){
        printf("Error 1b\n");
        return 1;
    }
    arr1[0].length=sz1;
    printf("%d\n", arr1[0].length);


    // pinakas 2
    pinakes *arr2;
    arr2=malloc(sizeof(pinakes));
    if (arr2 == NULL){
        printf("Error 2a\n");
        return 1;
    }
    scanf("%d", &arr2[0].length);
    int sz2=arr2[0].length;
    free(arr2);
    printf("%d\n", arr2[0].length);
    printf("%d\n", sz2);
    printf("Check 2\n");
    arr2=malloc(sz2*sizeof(pinakes));
    if (arr2 == NULL){
        printf("Error 2b\n");
        return 1;
    }
    arr2[0].length=sz2;
    printf("%d\n", arr2[0].length);
    

    // pinakas 3
    pinakes *arr3;
    arr3=malloc(sizeof(pinakes));
    if (arr3 == NULL){
        printf("Error 3a\n");
        return 1;
    }
    scanf("%d", &arr3[0].length);
    int sz3=arr3[0].length;
    free(arr3);
    printf("%d\n", arr3[0].length);
    printf("%d\n", sz3);
    printf("Check 3\n");
    arr3=malloc(sz3*sizeof(pinakes));
    if (arr3 == NULL){
        printf("Error 3b\n");
        return 1;
    }
    arr3[0].length=sz3;
    printf("%d\n", arr3[0].length);

    
    printf("Done allocating the length\n");
    
    printf("Length of arr1: %d\n", arr1[0].length);
    printf("Length of arr2: %d\n", arr2[0].length);
    printf("Length of arr3: %d\n", arr3[0].length);
    


    printf("\n\n");
    

    // fill the array 1
    long seed1;
    printf("Give a seed for the first array: ");
    scanf("%d", &seed1);
    fill_array(arr1[0].array, sz1, seed1);

    for (int i=0;i<sz1;i++){
        printf("%d\n", arr1[0].array[i]);
    }


    // fill the array 2
    long seed2;
    printf("Give a seed for the second array: ");
    scanf("%d", &seed2);
    fill_array(arr2[0].array, sz2, seed2);

    for (int i=0;i<sz2;i++){
        printf("%d\n", arr2[0].array[i]);
    }


    // fill the array 3
    long seed3;
    printf("Give a seed for the third array: ");
    scanf("%d", &seed3);
    fill_array(arr3[0].array, sz3, seed3);

    for (int i=0;i<sz3;i++){
        printf("%d\n", arr3[0].array[i]);
    }


    free(arr1);
    free(arr2);
    free(arr3);
    return 0;
}