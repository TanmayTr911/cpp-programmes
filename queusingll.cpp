#include <iostream>
using namespace std;

class node{
    public:
    int data;
    node* next;
    
    
    node(int val){
        data=val;
        next=NULL;

    }
};

class que{
    
    public:
    node* front;
    node* back;

    que(){

        front=NULL;
        back=NULL;

    }

    void push(int val){

        node* n=new node(val);

        if(front==NULL){
            front=n;
            back=n;
            return;
        }

        back->next=n;
        back=n;

    }

    void pop(){


        if(front==NULL){
            cout<<"empty que";
            return;
        }

        node* todelete=front;
        front=front->next;

        delete todelete;
    }

    int peak(){

         if(front==NULL){
            cout<<"empty que";
            return -1;
        }

        return front->data;

    }
};

int main(){

    que q;

    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);

    
    cout<<q.peak()<<endl;

    q.pop();

    cout<<q.peak();

}