#include <stdio.h>



int main(){
	char *str="1a2b3";
	int x,y,z;
	sscanf(str,"%da%db%d",&x,&y,&z);
	printf("%d\n", x);
	printf("%d\n", y);
	printf("%d\n", z);


	return 0;

	// int i,j,arr[10]={123,43,56,97,445,67,11,35,46,87};
	// j=97;
	// for (i=0; i<10; i++){
	// 	printf("%d \n", i);
	// 	if (arr[i]==j)
	// 		return 0;
	// }
	// printf("%d ", i);


}
