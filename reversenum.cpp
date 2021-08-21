#include <iostream>
using namespace std;

int main(){
    int i,k,j;
    j=0;
    cin>>i;
    while(i%10!=0){
        k=i%10;
        i/=10;
        j=j*10+k;
        }
    cout<<j;
}