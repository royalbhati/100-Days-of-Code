#include <stdio.h>

struct node{
    int data;
    struct node *pointer;
};

void print(struct node * n){
    while(n!=NULL){
        printf("%d\n",n->data);
        n=n->pointer;
    }
    
    
}
int main(){
    struct node *first=NULL;
    struct node *second =NULL;
    struct node *third =NULL;
    
    first=(struct node *)malloc(sizeof(struct node));
    second=(struct node *)malloc(sizeof(struct node));
    third=(struct node *)malloc(sizeof(struct node));
    
    first->data=10;
    first->pointer=second;

    second->data=20;
    second->pointer=third;
    
    third->data=30;
    third->pointer=NULL;
    
    print(first);
    
}
