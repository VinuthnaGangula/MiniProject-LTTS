#include<stdio.h>
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
    while(fgets(buff,50,fptr)){
        puts(buff);  
    }
    printf("\n");
    printf("Press 1 to display the Menu.....");
    while(c!=1){
       scanf("%d",&c);
    }
    
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
                viewDaemonDetails(num);
                break;
            }
            case 3 :
            {
                printf("\e[1;1H\e[2J");
                printf("Enter your Name : ");
                scanf("%s", name);
                printf("Enter your age : ");
                scanf("%d", &age);
                if(age>18){
                    printf("Sorry %s! A Daemon settles and stays in one form only after adolescence...\n I'll probably make a better one by the time you're 18! Wink!\n", name);
                }
                char* result=(char*)malloc(30);
                result=takeQuiz();
                displayResult(name,age,result);
                free(result);
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