#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(int argv,char *argc[]){
    
    // set variables
    
    FILE* f;
    char *ch = NULL;
    char *ch2,printch[100],arg_param[100];
    int read;
    char *param,*param2;
    size_t size  = 0;
    strcpy(arg_param, argc[1]);                        // copies the string value of the first argument to the variable arg_param
   
   
    // determinates if the programm is run from the pipe line or the text file is given with the parameter

    if (argv > 2 && strcmp(argc[2],"-f") == 0){
        f = fopen(argc[3], "r");
        if (f == NULL) {
            printf("The file is not opened.");         
            return -1;
        }
    }
    else{
        f = stdin;

    } 
    while ((read = getline(&ch,&size,f)) != -1){       // runs a while loop the read all the lines that came through the pipe
        ch[strlen(ch)-1]=' ';                          // deletes the space at the end of the ch string, by making it a space
        strcpy(printch, ch);                           // copies the string value of the variable ch to the variable printch, so that when the changes are made there is the whole value stored somewhere
        if (argc[1][strlen(argc[1])-1] == '$'){        // examines if the last character of the string of the first argument is $
            param2 = strtok(arg_param, "$");           // saves the string of arg_param without the '$' in the variable param2
            ch2 = strtok(ch, " ");                     // saves the string of ch without the end space in the variable ch2
            int f=0;                                   // sets the counter for the break
            while (ch2 != NULL) {                      // reads the string of the variable ch2 until the end of it
                if (strcmp(ch2,param2)==0){            // if it finds the param2 inside it the loop breaks and the programm continues
                    f=1;
                    break;
                }
                ch2 = strtok(NULL, " ");               // this sets the while loop condition
            }
            if (f==1) {                                
                ch2 = strtok(NULL, " ");               // checks if the counter has increased
                if (ch2 == NULL){                      // and prints the whole string that was sent through the pipe 
                    printf("%s\n", printch);            
                }
            }



        }
        else if(argc[1][0] == '^'){                    // examines if the first character of the string of the first argument is ^
            param = strtok(argc[1], "^");              // saves the string of the first argument in the variable param without the ^
            ch2 = strtok(ch, " ");                     // saves the string of ch without the end space in the variable ch2
            if (strcmp(ch2,param)==0){                 // checks if it found the string of the variable param inside the ch2 string
                printf("%s\n", printch);               // prints the whole string that was sent through the pipe
            }
        }  
        else{
            ch2 = strtok(ch, " ");                     // saves the string of ch without the end space in the variable ch2
            while(ch2 != NULL) {                       // reads the string of the variable ch2 until the end of it
                if (strcmp(argc[1],ch2)==0){           // compares the string of the first argument with the string of the variable ch2
                    printf("%s\n", printch);           // and prints the whole string that was sent through the pipe
                } 
                ch2 = strtok(NULL, " ");               // sets the while loop condition
            }
        }

    
    }
    if (argv > 2){
        fclose(f);
    }

    free(ch);
    return 0;                                          // exits the programm without an error 
}