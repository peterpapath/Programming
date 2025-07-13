#include <stdio.h>

int main(){
	int i,x,j,arr[6]={10,20,30,40,50,0};
	scanf("%d", &j);
	for (i=4; i>-1; i--){
		if(arr[i]>j){
			arr[i+1]=arr[i];
		}
		else{
			break;
		}
	}
	arr[i+1]=j;
	
	for(int a=0; a<6; a++){
		printf("%d ", arr[a]);
	}
}
