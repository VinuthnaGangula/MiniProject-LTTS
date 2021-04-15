#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include "tdq.h"

void fileToStruct(){
    FILE *fp=NULL;
    int num;
    char name[30], detail[100];
    daemons=(daemon*)malloc(sizeof(daemon)*8);
    for(int i=0;i<8;i++){
        fscanf(fp,"%d\t%s\t%s", &num, name, detail);
        daemons[i].d_num=num;
        strcpy(daemons[i].d_name, name);
        strcpy(daemons[i].d_detail, detail);
    }
    fclose(fp);
}