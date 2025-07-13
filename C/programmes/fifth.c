#include <stdio.h>

int main(){

    int *p[3];
    int a=1,b=2,c=3;
    p[0]=&a;
    p[1]=&b;
    p[2]=&c;

    for(int i=0;i<3;i++){
        printf("%d\n", *p[i]);
    }

}
