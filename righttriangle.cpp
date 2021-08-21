#include <iostream>
using namespace std;

int main(){
    int i, j,row,col;
    cin>>row;
    col=row;
    for(i=1;i<=row;i++){
        for (j=1;j<=col;j++){
            if(j<=5-i){
                cout<<"  ";
            }
            else{
                cout<<"* ";
            }
            
        }
    cout<<endl;
    }
}