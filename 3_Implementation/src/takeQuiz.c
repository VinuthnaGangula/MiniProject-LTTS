#include<stdio.h>
#include<string.h>
#include "tdq.h"

error_t takeQuiz(char* name, int age){
    char result[30];
    FILE *fptr=NULL;
    fptr=fopen("quiz.txt", "r");
    if(fptr==NULL){
        return NULL_FILE_PTR;
    }
    int q_num;
    char que[100];
    int arr[5];
    for(int i=0;i<5;i++){
        fscanf(fptr, "%d %s", &q_num, que);
        printf("%d. %s\n", q_num, que);
        scanf("%d", &arr[i]);
    }
    if(arr[0]==1){
        //Introvert.
            if(arr[1]==1){
                //Books.
                if(arr[3]==1){
                    //Morning Person.
                    strcpy(result, "Eagle");
                }
                else{
                    //Night Person.
                    strcpy(result,"Cat");

                }

            }
            else{
                //Music.
                if(arr[3]==1){
                    //Morning Person.
                    strcpy(result, "Rabbit");
                }
                else{
                    //Night Person.
                    strcpy(result, "Snake");
                    
                }
            }
        }
        else{
            //Extrovert.
            if(arr[1]==1){
                //Books.
                if(arr[3]==1){
                    //Morning Person.
                    strcpy(result, "Butterfly");
                }
                else{
                    //Night Person.
                    strcpy(result,"Leopard");

                }

            }
            else{
                //Music.
                if(arr[3]==1){
                    //Morning Person.
                    strcpy(result, "Dolphin");
                }
                else{
                    //Night Person.
                    strcpy(result, "Dog");
                    
                }
            }
        }
        displayResult(name, age, result);
return SUCCESS;
}