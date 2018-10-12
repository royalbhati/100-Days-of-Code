//Constant Pointers

#include <stdio.h>

int main(){
   int num=10;
   const int const_num=99; //constant integer  
   
   int *p;
   const int *const_p;
   
   p=&num;
   const_p=&const_num;
   
    *p=11; //works ok
    *const_p=100; // it will throw an error because we cant dereference a constant variable
   
   
   p=&const_num; //valid 

   const_p=&num; //valid
   
   *p=100;
   *const_p=11; //erroe because compiler thinks the deferencing id done to const var
   
   
   
   
   
   printf("%d",*p);
   printf("%d",*const_p);

   
   

    
}
