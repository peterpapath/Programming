#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argv, char *argc[]){
    for (int i=1;i<argv;i++){
        if (strcmp(argc[i],"-h")==0){
            printf(" -h ");
        }
        else if (strcmp(argc[i],"-v")==0){
            printf(" -v ");
        }
        else if (strcmp(argc[i],"-p")==0){
            printf(" -p ");
        }
        else if (argc[i][0] == '^'){
            printf("Correct");
        }
        else{
            printf("Wrong parameter");
            return 1;
        }
    }

    return 0;
}