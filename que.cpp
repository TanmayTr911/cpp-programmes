#include <iostream>
using namespace std;
#define n 100

class que{

    int* arr;
    int front;
    int back;

    public:
    que(){
        arr=new int[n];
        front=-1;
        back=-1;

    }

    void push(int val){

        if(back>=n-1){
            cout<<"full que";
            return;
        }

        back++;
        arr[back]=val;

        if(front==-1){
            front++;
        }
    }

    void pop(){

        if(front==-1 || front>back){
            cout<<"empty que";

        }

        front++;
    }

    int peak(){

        if(front==-1 || front>back){
            cout<<"empty que";
            return -1;

        }

        return arr[front];
    }

    bool empty(){
        if(front=-1 || front>back){
            return true;

        }
        else{
            return false;
        }
    }

};

int main(){


    que q;
    
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(5);

    q.pop();
    q.pop();
    //q.pop();
    //q.pop();
    cout<<q.peak();
    
}