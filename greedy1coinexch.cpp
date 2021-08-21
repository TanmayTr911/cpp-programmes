#include <iostream>
using namespace std;

int main(){


    int amnt;
    cin>>amnt;

    int num=0,i=0;

    int arr[]={2000,500,200,100,50,20,10,5,2,1};

    while(amnt>0){

        while(amnt-arr[i]>=0){
            amnt-=arr[i];
            if(amnt==0){
                cout<<arr[i];
            }
            else{
            cout<<arr[i]<<" + ";
            }
            
            num++;

        }

        i++;
    }

    cout<<endl<<num;
}