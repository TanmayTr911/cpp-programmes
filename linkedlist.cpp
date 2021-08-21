#include <iostream>
using namespace std;

class node{
    public:
    int data;
    node* next;

    node(int val){
        data =val;
        next=NULL;
        }
   

};
node* reverserecr(node* &head){
    if(head==NULL || head->next==NULL){
        return head;
    }
    node* newhead=reverserecr(head->next);
    head->next->next=head;
    head->next=NULL;
    
    return newhead;
    
}
node* reverseknodes(node* &head,int k){
    node* prevptr=NULL;
    node* currptr=head;
    node* nxtptr;
    int count=0;

    while(currptr!=NULL && count!=k){
        nxtptr=currptr->next;
        currptr->next=prevptr;
        prevptr=currptr;
        currptr=nxtptr;
        count++;
    }
    if(nxtptr!=NULL){
    head->next = reverseknodes(nxtptr,k);
    }

    return prevptr;
    
}

void makecycle(node* &head, int k){

    node* temp=head;
    node* topoint;
    int count=1;
    while(temp->next!=NULL){
        
        if(count==k){
            topoint = temp;
        }
        temp=temp->next;
        count++;
    }
    temp->next=topoint;
    
}


bool detectcycle(node* &head){
    node* slow=head;
    node* fast=head;

    while(fast->next!=NULL || fast!=NULL){
        slow=slow->next;
        fast=fast->next->next;

        if(fast==slow){
            return true;
        }
    }

    return false;

}

void removecycle(node* &head){
    node* slow=head;
    node* fast=head;

    while(fast->next!=NULL || fast!=NULL){
        slow=slow->next;
        fast=fast->next->next;

        if(fast==slow){
            fast=head;
            while(fast->next!=NULL || fast!=NULL){
                slow=slow->next;
                fast=fast->next;
                if(fast->next==slow->next){
                    slow->next=NULL;
                    break;
                }
            }
            break;
        }
    }

}

bool search(node* &head, int key){

    node* temp=head;
    while(temp!=NULL){
        if(temp->data==key){
            return true;
        }
        temp=temp->next;
    }
    return false;
    
}

void delhead(node* &head){
    node* todel=head;
    head=head->next;
    delete todel;
}

void deletion(node* &head,int key){
    
    
    if(head==NULL){
        return;
    }
    if(head->next==NULL){
        delhead(head);
        return;
    }

    node* temp=head;
    while(temp->next->data!=key){
        temp=temp->next;
    }
    node* todel= temp->next;
    temp->next=temp->next->next;

    delete todel;
}
 
 void insertAtTail(node* &head,int val){
        
        node* n= new node(val);

        if(head==NULL){
            head=n;
            return;
        }
        
        node* temp=head; 
        while(temp->next!=NULL){
            temp=temp->next;
        }
        temp->next=n;
    } 
void insertAtHead(node* &head,int val){
    node* n= new node(val);
    n->next=head;
    head=n;
    }
    
    
void display(node* &head){


    node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<"->";
        temp=temp->next;
    }
    cout<<"NULL"<<endl;
    }

int main(){

    node* head=NULL;
    insertAtTail(head,2);
    insertAtTail(head,3);
    insertAtHead(head,1);
    insertAtTail(head,4);
    insertAtTail(head,5);
    insertAtTail(head,6);
    
    //deletion(head,4);
    //delhead(head);
    //display(head);
    //cout<<search(head,2);

    //int k=4;

    //makecycle(head,k);
    //node* newhead=reverseknodes(head,k);
    //removecycle(head);

    display(head);

}