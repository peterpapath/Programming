#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argv, char *argc[]){
    FILE *f;
    char *data;
    size_t size = 0;
    int read;
    int first,second,telos;
    int average, arr[5];
    char arr_surname[5][20], arr_name[5][20];
    int arr_first[5], arr_second[5], arr_telos[5]; 
    char surname[20], name[20];



    // open file
    if(argv > 1 && strcmp(argc[1],"-f") == 0){
        f = fopen(argc[2], "r");
        if (f == NULL){
            printf("The file does not exist");
            return -1;
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
        int result = sscanf(data, "%s %s %d %d %d", arr_surname[i], arr_name[i],&first, &second, &telos);
        average = (first+second+telos)/3;
        printf("average for %s %s: %d\n", arr_surname[i], arr_name[i], average);
        arr[i]=average;
        arr_first[i]=first;
        arr_second[i]=second;
        arr_telos[i]=telos;
        i++;
    }
    
    // print the information of the students
    printf("\n");
    for(int i=0;i<5;i++){
        printf("%s   \t", arr_surname[i]);
        printf("%s   \t", arr_name[i]);
        printf("%d   \t", arr_first[i]);
        printf("%d   \t", arr_second[i]);
        printf("%d   \t", arr_telos[i]);
        printf("%d   \t", arr[i]);
        printf("\n");
    }



    // calculate the average of the whole class
    printf("\n");
    int sum=0;
    float average2;
    for (int metr=0;metr<5;metr++){
        sum=sum+arr[metr];
    }    
    average2 = (float) sum/5;
    printf("Average of the class: %f ", average2);
    

    // students whose average is more the class average
    printf("\n\n");
    for(int i=0;i<5;i++){
        if(arr[i]>average2){
            printf("%s   \t", arr_surname[i]);
            printf("%s   \t", arr_name[i]);
            printf("%d   \t", arr_first[i]);
            printf("%d   \t", arr_second[i]);
            printf("%d   \t", arr_telos[i]);
            printf("%d   \t", arr[i]);
            printf("\n");
        }
    } 




    // print the students' information alphabetically by their surnames
    char a[20];
    int b;
    for (int i=0; i<5; i++){
        for (int j=0; j<5-1-i; j++){
            if (arr_surname[j] < arr_surname[j+1]){
                strcpy(a,arr_surname[j]);
                strcpy(arr_surname[j],arr_surname[j+1]);
                strcpy(arr_surname[j+1],a);    
                
                strcpy(a,arr_name[j]);
                strcpy(arr_name[j],arr_name[j+1]);
                strcpy(arr_name[j+1],a);

                b=arr_first[j];
                arr_first[j]=arr_first[j+1];
                arr_first[j+1]=b; 

                b=arr_second[j];
                arr_second[j]=arr_second[j+1];
                arr_second[j+1]=b; 
                
                b=arr_telos[j];
                arr_telos[j]=arr_telos[j+1];
                arr_telos[j+1]=b; 

                b=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=b; 

            }

        }
    }
    printf("\n");
    for (int i=0;i<5;i++){
        printf("%s   \t", arr_surname[i]);
        printf("%s   \t", arr_name[i]);
        printf("%d   \t", arr_first[i]);
        printf("%d   \t", arr_second[i]);
        printf("%d   \t", arr_telos[i]);
        printf("%d   \t", arr[i]);
        printf("\n");
    }

 
 
    if (argv > 1){
        fclose(f);
    }
    return 0;

}