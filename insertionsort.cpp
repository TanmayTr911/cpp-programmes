#include <iostream>
using namespace std;

int main(){
    int n,temp,j;
    cin>>n;
    int arr[n];
    
    for(int k=0;k<n;k++){
        cin>>arr[k];
        }
    
    for(int i=1;i<=n;i++){
        int current=arr[i];
        for(j=i-1;j>0;j--){
            if(arr[i]<arr[j]){
                arr[j+1]=arr[j];
                }
        }
        arr[j+1]=arr[i];
        }
    for(int h=0;h<n;h++){
        cout<<arr[h]<<"  ";
    }



    }