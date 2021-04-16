#include<stdio.h>
#include "tdq.h"

void viewDaemonList(){
    int dnum;
    char dname[50];
    for(int i=0;i<8;i++){
        printf("%d %s\n", daemons[i].d_num, daemons[i].d_name);
    }
}