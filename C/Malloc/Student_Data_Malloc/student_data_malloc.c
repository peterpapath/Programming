#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef int number;
typedef struct math{
    char surname[20];
    char name[20];
    number first;
    number second;
    number telos;
}mathites;

int main(int argv, char **argc){
    FILE *f;
    int sz=0;
    char *data = NULL;
    size_t size = 0;
    int read;
    mathites *x = NULL;
    float average;
    float *arr = NULL;

    

    //open the file
    if(argv > 1 && strcmp(argc[1],"-f") == 0){
        f = fopen(argc[2], "r");
        if (f == NULL){
            printf("The file does not exist");
            return -1;
        }


        while ((read = getline(&data,&size,f)) != -1){
            sz++;
        }
        printf("The size of the file is: %d\n\n", sz);
        rewind(f);
        x=malloc(sz*sizeof(mathites));
        if (x == NULL){
            printf("Error");
            return 1;
        }
        arr=malloc(sz*sizeof(float));
        if (arr == NULL){
            printf("Error");
            return 1;
        }


    }
    else if (argv <= 1){
        printf("Give a specific file with the -f parameter (list.txt)");
        return 0;
    }


    // print the file contents
    while ((read = getline(&data,&size,f)) != -1){
        printf("%s", data);

    }


    // calculate the average of every student
    printf("\n\n");
    rewind(f);
    int i=0;
    while ((read = getline(&data,&size,f)) != -1){
        int result = sscanf(data, "%s %s %d %d %d", x[i].surname, x[i].name,&x[i].first, &x[i].second, &x[i].telos);
        average = (x[i].first+x[i].second+x[i].telos)/3.0;
        printf("average for %s %s: %0.2f\n", x[i].surname, x[i].name, average);
       arr[i]=average;
        i++;
    }
    


    // print the information of the students
    printf("\n");
    for(int i=0;i<sz;i++){
        printf("%s   \t", x[i].surname);
        printf("%s   \t", x[i].name);
        printf("%d   \t", x[i].first);
        printf("%d   \t", x[i].second);
        printf("%d   \t", x[i].telos);
        printf("%0.2f   \t", arr[i]);
        printf("\n");
    }


    // calculate the average of the whole class
    printf("\n");
    int sum=0;
    float average2;
    for (int metr=0;metr<sz;metr++){
        sum=sum+arr[metr];
    }    
    average2 = (float) sum/sz;
    printf("Average of the class: %0.2f ", average2);
    



    // students whose average is more the class average
    printf("\n\n");
    for(int i=0;i<sz;i++){
        if(arr[i]>average2){
            printf("%s   \t", x[i].surname);
            printf("%s   \t", x[i].name);
            printf("%d   \t", x[i].first);
            printf("%d   \t", x[i].second);
            printf("%d   \t", x[i].telos);
            printf("%0.2f   \t", arr[i]);
            printf("\n");
        }
    } 


    // print the students' information alphabetically by their surnames
    char a[20];
    int b;
    float c;
    for (int i=0; i<sz; i++){
        for (int j=0; j<sz-1-i; j++){
            if (strcmp(x[j].surname , x[j+1].surname) > 0){
                strcpy(a,x[j].surname);
                strcpy(x[j].surname,x[j+1].surname);
                strcpy(x[j+1].surname,a);    
                
                strcpy(a,x[j].name);
                strcpy(x[j].name,x[j+1].name);
                strcpy(x[j+1].name,a);

                b=x[j].first;
                x[j].first=x[j+1].first;
                x[j+1].first=b; 

                b=x[j].second;
                x[j].second=x[j+1].second;
                x[j+1].second=b; 
                
                b=x[j].telos;
                x[j].telos=x[j+1].telos;
                x[j+1].telos=b; 

                c=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=c; 

            }

        }
    }
    printf("\n");
    for (int i=0;i<sz;i++){
        printf("%s   \t", x[i].surname);
        printf("%s   \t", x[i].name);
        printf("%d   \t", x[i].first);
        printf("%d   \t", x[i].second);
        printf("%d   \t", x[i].telos);
        printf("%0.2f   \t", arr[i]);
        printf("\n");
    }






    if (argv > 1){
        fclose(f);
    }
    free(data);
    free(x);
    free(arr);
    return 0;


}