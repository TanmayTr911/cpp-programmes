#include <iostream>
using namespace std;

#define n 100

class stack{
    int* arr;
    int top;

    public:
    stack(){
        arr=new int[n];
        top = -1;
    }

    void push(int key){

        if(top==n-1){
            cout<<"STack Overflow";
            return;

        }
        top++;
        arr[top]=key;
        return;
    }
    void pop(){

        if(top==-1){
            cout<<"no input in the given stack";
            return;

        }
        top--;
        return;
    } 
    int Top(){
        
        if(top==-1){
            cout<<"no input in the given stack";
            return -1;
        }

        
        return arr[top];
        
    }
    
    bool empty(){
        return top==-1;

    }
};

int main(){

    stack st;

    st.push(1);
    st.push(2);
    st.push(3);

    cout<<st.Top()<<endl;

    
    st.pop();
    cout<<st.Top()<<endl;
    st.pop();
    cout<<st.Top()<<endl;
    st.pop();
    

    cout<<st.empty();





}

