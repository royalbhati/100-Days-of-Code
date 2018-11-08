/******************************************************************************

          program to delete a number from a given location in an array

*******************************************************************************/

#include <stdio.h>

int main()
{
   int i,small=0,index,arr[7]={1,2,3,4,0,9,5};
   for(i=0;i<7;i++){
       printf("%d ",arr[i]);
   }   
    for(int i=3;i<7;i++){
        arr[i]=arr[i+1];
    }
    for(i=0;i<6;i++){
       printf("\n%d ",arr[i]);
    }   

}
