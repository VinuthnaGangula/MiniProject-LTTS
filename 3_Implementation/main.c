#include<stdio.h>
#include "tdq.h"

int main(){
    int ch,num;
    int c=-2;
    char buff[255];
    char name[100];
    int age;
    FILE *fptr;
    fptr = fopen("intro.txt", "r");
    while(fgets(buff,50,fptr)){
        printf("%s",buff);  
    }
    printf("Press any number between 0 and 9 to display the Menu.....");
    while(c<=9 && c>=0){
        c=getchar();
    }
    //clearScreen();
    system("cls");
    //Display Menu...
        do{
            printf("Choose an option to continue...\n1.View Daemons List\n2.View a Daemon Details\n3.Take quiz\n4.Exit\n");
            scanf("%d", &ch);
            switch(ch){
            case 1 :
            {
                //viewDaemonList();
                break;
            }
            case 2 :
            {
                //viewDaemonList();
                printf("Enter Daemon Number\n");
                scanf("%d",&num);
                //clearScreen();
                //viewDaemonDetails(num);
                break;
            }
            case 3 :
            {
                printf("Enter your Name : ");
                scanf("%s", name);
                printf("Enter your age : ");
                scanf("%d", &age);
                //takeQuiz();
                //displayResult(name,age);
                break;
            }
            case 4 :
            {
                //clearScreen();
                system("cls");
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