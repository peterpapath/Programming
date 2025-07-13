#include <stdio.h>
#include <string.h>

struct mathites_struct{
    char surname[20];
    char name[20];
    int first;
    int second;
    int telos;
};

int main(int argv, char **argc){
    struct mathites_struct x[2];
    char arr_surname[2], arr_name[2];
    for (int i=0;i<=1;i++){
        printf("Give data of stundent %d\n", i+1);
        printf("Give the surname: ");
        scanf("%s", &x[i].surname);
        printf("Give the name: ");
        scanf("%s", &x[i].name);
        printf("Give the grade of the first term: ");
        scanf("%d", &x[i].first);
        printf("Give the grade of the second term: ");
        scanf("%d", &x[i].second);
        printf("Give the grade of the final exam: ");
        scanf("%d", &x[i].telos);
    }

    for (int i=0;i<=1;i++){
        printf("Print The Data Of Student %d\n", i+1);
        printf("surname: %s\n", x[i].surname);
        printf("name: %s\n", x[i].name);
        printf("first term : %d\n", x[i].first);
        printf("second term: %d\n", x[i].second);
        printf("final exam: %d\n", x[i].telos);
    }

    return 0;

}