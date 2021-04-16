#include<stdio.h>
#include<string.h>
#include "tdq.h"

error_t takeQuiz(char* name, int age){
    char result[30];
    printf("Choose which describes you the best from the set of given options.\nPress 1 for 1st option and 2 for second and then press enter till you for all four Questions.");
    int arr[3];
    printf("\n1. Introverted (or) Extroverted ?\n");
    scanf("%d",&arr[0]);
    printf("2. Books (or) Music ?\n");
    scanf("%d",&arr[1]);
    printf("3. Morning Person (or) Night Person ?\n");
    scanf("%d",&arr[2]);
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