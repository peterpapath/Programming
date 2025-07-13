#include <stdio.h>

void func(int *x,int *y){
    printf("\n func");
    printf("%d %d", *x,y);
    printf("\n %d - %d \n", *x,x);
	for (int i=0; i<*x; i++){
		printf("%d ", y[i]);
	}

    y[0]=-1;
    y[8]=-2;

    *x=5;
    

}


int main(){
	int i,arr[10]={123,43,56,97,445,67,11,35,46,87}, x=123;
	for (i=0; i<10; i++){
		printf("%d ", *(arr+i));
	}
    // printf("\n printf(" %d", &i); arr %d ", *arr);
    // printf("\n arr %d ", *(arr+1));
    i=10;
    
    func(&i ,arr);
    printf("\n i %d ", i);

    printf("\n arr ");
    for (i=0; i<10; i++){
		printf("%d ", *(arr+i));
	}
   	return 0;
}
