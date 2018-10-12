//Multiple Levels of Indirection in Pointers

#include <stdio.h>

int main(){
    char *name[]={"royal","john","ron","lawn","brawn"};
    
    char **bestemplyee[3];
    char **total_employee[6];
    
    bestemplyee[0]=&name[0]; //storing values without copying data and instead referencing it
    bestemplyee[1]=&name[3];
    bestemplyee[2]=&name[4];
    
    total_employee[0]=&name[0];
    total_employee[1]=&name[1];
    total_employee[2]=&name[2];
    total_employee[3]=&name[3];
    
    for(int i=0;i<sizeof(bestemplyee)/sizeof(bestemplyee[0]);i++){
        printf("%s\n",*(bestemplyee[i]));
    }

    
}
