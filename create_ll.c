#include<stdio.h>
#include<stdlib.h>

// A linked list node 
struct Node {
    int data;
    struct Node* next;
};

void printList(struct Node* n){
    while(n!=NULL){
        printf("%d \n",n->data);
        n=n->next;
    }
}

//program to create a simple linkedlist
int main(){
    //|data|next|-->|data|next|-->|data|next|
     //|head|101|-->|second|201|-->|third|NULL|
     
     struct Node* head =NULL;
     struct Node* second =NULL;
     struct Node* third =NULL;
     
     //allocate 3 node in the heap 
     head=(struct Node*)malloc(sizeof(struct Node));
     second=(struct Node*)malloc(sizeof(struct Node));
     third=(struct Node*)malloc(sizeof(struct Node));
     
     head->data=1;
     head->next=second;
     
     second->data=2;
     second->next=third;
     
     third->data=3;
     third->next=NULL;
     
     printList(second);
     
     return 0 ;
}
