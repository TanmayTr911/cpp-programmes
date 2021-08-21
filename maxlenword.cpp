#include <iostream>
#include <climits>
using namespace std;

int main(){
    int n;
    cin>>n;
    cin.ignore();
    char arr[n+1];

    cin.getline(arr,n);
    
    for(int k=0;k<n;k++){
        cin>>arr[k];
        }
    int maxlen=INT_MIN;
    int len=0;
    for(int i=0;i<n;i++){
        if(arr[i] == ' '){
            len=0;
            }
        else{
            len++;
        }
        maxlen=max(len,maxlen); 
           
    }
    
    cout<<maxlen;
}