#include <bits/stdc++.h>
using namespace std;

int main(){
    
    int arr[]={1,2,3,4,5,-1,-4,6};

    int i=0;
    int j=0;

    int sum=0;
    int ans=INT_MAX;

    while(j<8){

        while(j-i+1<=3){
            sum+=arr[j];
            j++;
        }

        ans=min(ans,sum);
        sum-=arr[i];
        i++;

    }

    cout<<ans;
}
