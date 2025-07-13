#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main(int argv, char *argc[]){
    FILE* f;
    char *data;
    size_t size = 0;
    int read;
    if (argv >1 && strcmp(argc[1],"-f") == 0){
        f = fopen(argc[2], "r");
        if (f == NULL) {
            printf("The file is not opened.");
            return -1;
        }
    }
    else{
        f = stdin;

    }
    printf("aaa");
    while ((read = getline(&data,&size,f)) != -1)
        printf("%s", data);

    // while (fgets(data, 50, f) != NULL){
    //     printf("%s", data);

    // }
    if (argv > 1){
        fclose(f);
    }

    return 0;
}