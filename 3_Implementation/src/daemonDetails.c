#include <stdio.h>
#include "tdq.h"

error_t viewDaemonDetails(int dnum){
   for(int i=0;i<20;i++){
        printf("%s\n",daemons[i].d_detail);
    }
    return SUCCESS;
}