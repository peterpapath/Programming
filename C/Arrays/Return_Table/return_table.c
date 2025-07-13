#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void func(int *y){
    int arr2[10];
    for (int i=0; i<10; i++){
        arr2[9-i]=y[i];
	}
    for (int i=0; i<10; i++){
        y[i]=arr2[i];
	}
}

void func2(int a){
    int arr2[a], y[a];
    // srand(10);
    printf("\n %d \n", time(NULL));
    srand(time(NULL));
    for (int i=0; i<a; i++){
        y[i] = rand() % 10;
        printf("%d " ,y[i]);
    }
    for (int i=0; i<a; i++){
        arr2[a-1-i]=y[i];
	}
    for (int i=0; i<a; i++){
        y[i]=arr2[i];
	}
    printf("\n");
    for (int i=0; i<a; i++){
        printf("%d " ,arr2[i]);
    }
}



void antistrofi(){
    int a;
    printf("Dose to mikos tou pinaka: ");
    scanf("%d", &a);
    func2(a);

}


int main(){
    antistrofi();
    return 0;
    int arr[10]={0,10,20,30,40,50,60,70,80,90};
    for (int i=0; i<10; i++){
		printf("%d ", arr[i]);
	}
    func(arr);
    printf("\n");
    for (int i=0; i<10; i++){
		printf("%d ", arr[i]);
	}
}