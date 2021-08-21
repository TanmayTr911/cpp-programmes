#include <iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];
    
    for(int k=0;k<n;k++){
        cin>>arr[k];
        }
    
    for(int i=n;i>=0;i--){
        for(int j=0;j<i;j++){
            if(arr[j]>arr[j+1]){
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    for(int h=0;h<n;h++){
        cout<<arr[h]<<"  ";
        }
    
}