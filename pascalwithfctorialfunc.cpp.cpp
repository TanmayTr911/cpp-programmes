#include <iostream>
using namespace std;

int fact(int num){
    int factorial=1;
    for(int k=1;k<=num;k++){
        factorial*=k;
    }
    return factorial;
}

int main(){
    int f;
    cin>>f;
    for(int i=0;i<=f;i++){
        for(int j=0;j<=i;j++){
            cout<< fact(i)/(fact(j) * fact(i-j)) <<"  ";
        }
        cout<<endl;
    }

}