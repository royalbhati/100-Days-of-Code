//Binary Search 

#include <stdio.h>

int binary_s(int *arr[],int x,int l,int r){
    int mid=l+r/2;
    
    if(r>=0){
        
        if(arr[mid]==x){
            return 1;
        }
        else if(mid<x){
        return binary_s(arr,x,mid+1,(sizeof(arr)/sizeof(arr[0])-1));
        }
        else if (mid>x){
        return binary_s(arr,x,0,mid);
        }
    }
    else{
        return -1;
    }
    
    
}


int main(){
   int *arr[]={1,2,5,4,5,6,8,9,};

   int x=binary_s(arr,1,0,(sizeof(arr)/sizeof(arr[0])-1));
   
   if(x==1)
       printf("found\n");
   else    
      printf("not\n");
   

   
}
