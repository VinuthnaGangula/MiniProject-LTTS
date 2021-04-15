#include<stdio.h>
#include "tdq.h"

error_t viewDaemonList(){
    int dnum;
    char dname[50];
    for(int i=0;i<20;i++){
        printf("%d. %s", daemons[i].d_num, daemons[i].d_name);
    }
    return SUCCESS;
}