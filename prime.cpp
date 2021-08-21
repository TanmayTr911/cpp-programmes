#include<iostream>
using namespace std;

int main(){

    int num;
    int check;
    cout<<"Enter a Number to Check For Prime";
    cin>>num;
    for(check=2;check<num;check++){
        if(num%check==0){
            cout<<"NOT PRIME";
            break;
        }
    }
    if(check==num){
        cout<<"PRIME";
    }
}