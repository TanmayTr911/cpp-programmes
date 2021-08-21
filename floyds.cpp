#include <iostream>
using namespace std;

int main(){
    int i, j,row,col;
    cin>>row;
    col=row;
    int counter;
    counter=1;
    for(i=1;i<=row;i++){
        for (j=1;j<=col;j++){
            if(j<=i){
                cout<<counter<<" ";
                counter++;
            }
        }
    cout<<endl;
    }
}