#include <iostream>
using namespace std;

int main(){
    int h , octa,k;
    octa=0;
    cin>>h;
    for(int i=0;i<=h;i++){
        if(h / (8^i)==0){
            k=h/(8^(i-1));
            octa*=10 + k;
            h-=k*(8^(i-1));
            }
            }
            cout<<octa;
            return 0;
    
  
}