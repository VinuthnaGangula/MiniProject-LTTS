#include<stdio.h>
#include<stdlib.h>
#include "tdq.h"

int main(){
    int ch,num;
    int c=-2;
    char buff[255];
    char name[100];
    int age;
    FILE *fptr;
    fptr = fopen("src/intro.txt", "r");
    if(fptr==NULL){
        printf("error");
        return NULL_FILE_PTR;
    }
    printf("\n");
    while(fgets(buff,250,fptr)){
        puts(buff);  
    }
    printf("\n");
    printf("Press 1 to display the Menu.....\n");
    while(c!=1){
       scanf("%d",&c);
    }
    fileToStruct();
    printf("\e[1;1H\e[2J");
        do{
            printf("Choose an option to continue...\n1.View Daemons List\n2.View a Daemon Details\n3.Take quiz\n4.Exit\n");
            scanf("%d", &ch);
            switch(ch){
            case 1 :
            {
                printf("\e[1;1H\e[2J");
                viewDaemonList();
                break;
            }
            case 2 :
            {
                printf("\e[1;1H\e[2J");
                viewDaemonList();
                printf("Enter Daemon Number\n");
                scanf("%d",&num);
                printf("\e[1;1H\e[2J");
                char * result=viewDaemonDetails(num);
                printf("%s\n", result);
                break;
            }
            case 3 :
            {
                char* result;
                printf("\e[1;1H\e[2J");
                printf("Enter your Name : ");
                scanf("%s", name);
                printf("Enter your age : ");
                scanf("%d", &age);
                if(age<18){
                    printf("Sorry %s! A Daemon settles and stays in one form only after adolescence...\nI'll probably make a better one by the time you're 18! Wink!\n", name);
                }
                else{
                    if(takeQuiz(name, age,&result)!=SUCCESS){
                        return NULL_FILE_PTR;
                    }
                }
                break;
            }
            case 4 :
            {
                printf("\e[1;1H\e[2J");
                printf("Thank you!\n");
                break;
            }
            default :
            {
                printf("Please enter a valid option\n");
                break;
            }
            }
        }while(ch!=4);
    fclose(fptr);
    return 0;
}