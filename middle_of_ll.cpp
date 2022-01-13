//MIDDLE OF A LL 
        // 1 2 3 4 5 6 7 8 9  
        //         
            
        //SLOW=1  FAST=2
        
        
        
#include <iostream>
using namespace std ;


class Node{
    public:
    int data;
    Node *next ;
};

void Middle (class Node *head){
    struct Node *slow=head;
    struct Node *fast=head;
    
    if (head!=NULL)
    {
        while(fast !=NULL && fast->next!=NULL){
            fast=fast->next->next;
            slow=slow->next;
        }
        cout<<"mid elelment is "<<slow->data
    }
    
}
