#include <stdio.h>
#include <stdlib.h>
#include "../../utils/utils.h"

void banner(){
    printf("@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n");
    printf("@    _                            ___        _   _                 @\n");
    printf("@   / \\   _ __ _ __ __ _ _   _   / _ \\ _ __ | |_(_) ___  _ __  ___ @\n");
    printf("@  / _ \\ | '__| '__/ _` | | | | | | | | '_ \\| __| |/ _ \\| '_ \\/ __|@\n");
    printf("@ / ___ \\| |  | | | (_| | |_| | | |_| | |_) | |_| | (_) | | | \\__ \\@\n");
    printf("@/_/   \\_|_|  |_|  \\__,_|\\__, |  \\___/| .__/ \\__|_|\\___/|_| |_|___/@\n");
    printf("@                        |___/        |_|                          @\n");
    printf("@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n\n");
}


int menu(){
    int option;
    system("clear");
    banner();
    printf("Menu\n");
    printf("1) Create an array\n");
    printf("2) Print out the array\n");
    printf("3) Classify the array\n");
    printf("0) Exit\n");
    printf("Choose an option: ");
    scanf("%d", &option);    
    return option;
}

int main(){
    int option,length,seed;
    char class,ch[2];
    printf("Give the arrays length: ");
    scanf("%d", &length);
    int arr[length];
    
    while(1){
        option=menu();
        switch (option){
            case 0:
                return 0;
            case 1:
                printf("Give the array's seed: ");
                scanf("%d", &seed);
                fill_array(arr, length, seed);
                break;
            case 2:
                print_arr(arr, length);
                printf("\nPress any key to continue");
                getchar();    
                getchar();    
                break;
            case 3:
                printf("Do you want the classification to be (a)scending or (d)escending: ");
                scanf("%s", &ch);
                bsort(arr, length, ch[0]);
                break;
            default:
                printf("Invalid option\n");
                break;
        }
    }
}