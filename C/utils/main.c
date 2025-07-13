#include <stdio.h>
#include <time.h>
#include "utils.h"
#define MAXNUM 15

int main(){
    int arr[MAXNUM];

    fill_array(arr,MAXNUM,time(NULL));
    print_arr(arr, MAXNUM);
    bsort(arr, MAXNUM,'d');
    printf("\n");
    print_arr(arr, MAXNUM);
}