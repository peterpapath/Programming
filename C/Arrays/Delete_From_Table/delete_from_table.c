#include <stdio.h>

int main(){
	int i,j,arr[6]={10,20,30,40,50,0};
	scanf("%d", &j);
    for (i=0; i<6; i++){
		if(arr[i]>=j){
			arr[i]=arr[i+1];
		}
    }
	
	for(int a=0; a<6; a++){
		printf("%d ", arr[a]);
	}
}
