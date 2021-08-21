#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,key;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cin>>key;

    int minloc = INT_MAX,maxloc=INT_MIN;
    
    int s,e,mid;
    s=0;
    e=n;
    while(s<=e){
        mid=(e+s)/2;

        if(key==arr[mid]){
            minloc=min(minloc,mid);
            maxloc=max(maxloc,mid);
            continue;
        }

        else if(key<arr[mid]){
            e=mid-1;
        }

        else if(key>arr[mid]){
            s=mid+1;
        }
    }

    if(minloc ==INT_MAX && maxloc == INT_MIN){
        cout<<-1;
    }

    else{
        cout<<minloc<<"  "<<maxloc;
    }
    

}