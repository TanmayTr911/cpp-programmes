#include<iostream>
using namespace std;

int main(){

    int a,b,num,i;
    cout<<"enter 1st number for between prime";
    cin>> a;
    cout<<"enter 2nd number for between prime";
    cin>> b;
    for(num=a;num<b;num++){
        for(i=2;i<num;i++){
            if(num%i==0){
                break;
            }
        
        }
        if(i==num){
            cout<<num<<endl;
        }
    }
}