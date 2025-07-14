#include <stdio.h>
#define arr1items 4
#define arr2items 4
#include "../../utils/utils.h"


int main(){
    int i;
    int n1=0, n2=0;
    int arr1[arr1items]={1,8,15,25};
    int arr2[arr2items]={12,24,80,90};
    int arr3[arr1items + arr2items]={};
    for(i=0; i<8; i++){
        if (n1 >= arr1items){
            n2++;
            if (arr1[i-n2] > arr2[i-n1]){
                arr3[i] = arr1[i-n2];
                n1++;
            }
            else if (arr1[i-n2] <= arr2[i-n1]){
                arr3[i] = arr2[i-n1];
            }
        }

        else if (n2 >= arr2items){
            n1++;
            if (arr1[i-n2] > arr2[i-n1]){
                arr3[i] = arr1[i-n2];
            }
            else if (arr1[i-n2] <= arr2[i-n1]){
                arr3[i] = arr2[i-n1];
                n2++;
            }
        }

        else{
            if (arr1[i-n2] < arr2[i-n1]){
                arr3[i] = arr1[i-n2];
                n1++;
            }
            else if (arr1[i-n2] >= arr2[i-n1]){
                arr3[i] = arr2[i-n1];
                n2++;
            }

        }

    }

    print_arr(arr1,arr1items);
    printf("\n");
    print_arr(arr2,arr2items);
    printf("\n");
    print_arr(arr3,arr1items+arr2items);
    

}
