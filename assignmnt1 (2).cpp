#include <bits/stdc++.h>
using namespace std;

int func(int arr[],int s,int e,int num){

    if(s>e){
        return -1;
    
    }

    int mid =(s+e)/2;

    if(arr[mid]==num){
        return mid;
    }

    else if(arr[mid]>num){
        return func(arr,s,mid-1,num);
    }

    else{
        return func(arr,mid+1,e,num);
    }
}

int main(){

    int n;
    cin>>n;

    int arr[n];

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    sort(arr,arr+n);

    int num;cin>>num;

    cout<<func(arr,0,n-1,num);

}