#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int num,s,j,k;
    cin>>num;
    s=0;
    k=num;
    while(num>0){
        j=num%10;
        s+= pow(j,3);
        num=num/10;
    }
    if(s==k){
        cout<<"num is palidrome";
        }
    else{
        cout<<"not palindrome";
        }
    
}