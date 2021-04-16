#include <stdio.h>
#include "tdq.h"

char* viewDaemonDetails(int dnum){
    if(dnum<0 || dnum>=8){
        return "Please enter valid number between 0 and 7\n";
    }
   for(int i=0;i<8;i++){
       if(daemons[i].d_num==dnum){
            return daemons[i].d_detail;
       }
    }
}