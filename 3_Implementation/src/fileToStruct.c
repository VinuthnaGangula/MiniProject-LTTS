#include<stdio.h>
#include "tdq.h"

error_t populateStruct(){
    FILE *fp=NULL;
    if(fp==NULL){
        return NULL_FILE_PTR;
    }
    int i=0;
    while(fscanf(fp, "%d %s %s", &(daemons[i].d_num), daemons[i].d_name, daemons[i].d_detail)!=EOF){
        i++;
    }
    return SUCCESS;
    fclose(fp);
}