#include<stdio.h>
#include "tdq.h"

error_t displayResult(char* name, int age,char* result){
    printf("Name : %s\n", name);
    printf("Age : %d\n", age);
    printf("Daemon : %s\n", result);
}