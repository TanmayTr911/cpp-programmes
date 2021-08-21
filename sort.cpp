#include <iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];
    
    for(int k=0;k<n;k++){
        cin>>arr[k];
        }
    
    for(int i=0;i<n;i++){
        
        for(int j=i;j<n;j++){
           
            if(arr[i]>arr[j]){
                
                int temp=arr[i];
                
                arr[i]=arr[j];
                
                arr[j]=temp;
            }
        }
    }
    for(int l=0;l<n;l++){
        cout<<arr[l]<<"  ";
    }
    
}