#include <iostream>
using namespace std;

int main(){

    int n,key,x;
    cin>>n>>key>>x;

    int arr[n];

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int i=0;
    int j=0;
    int sum=0;
    int ans=0;

    while(i+key<=n){
        while(j-i+1<=key){
            if(sum+arr[j]<x){
                sum+=arr[j];
                
            }
            j++;
        }
        ans=max(sum,ans);
        sum-=arr[i];
        i++;
    }

    cout<<ans;
}