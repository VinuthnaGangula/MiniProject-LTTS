#include <stdio.h>
#include "tdq.h"

void viewDaemonDetails(int dnum){
   for(int i=0;i<8;i++){
       if(daemons[i].d_num==dnum){
            printf("%s\n",daemons[i].d_detail);
       }
    }
}