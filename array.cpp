#include <iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    cout<<endl;
    
    for(int j;j<n;j++){
        arr[j]+=4;
    }

    for(int &ch : arr){
        cout<<ch<<"  ";
    }
    }
