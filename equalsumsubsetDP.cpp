#include <bits/stdc++.h>
using namespace std;

const int N=100;
const int W=100;

bool t[N+1][W+1];

bool subsetsum(int arr[],int sum ,int n){

    for(int i=0;i<n+1;i++){
        for(int j=0;j<sum+1;j++){

            if(i==0){
                t[i][j]=false;
            }

            if(j==0){
                t[i][j]=true;

            }
        }
    }

    for(int i=1;i<n+1;i++){
        for(int j=1;j<sum+1;j++){

            if(arr[i-1]<=sum){

                t[i][j]=(t[i-1][j-arr[i-1]] || t[i-1][j]);
            }

            else{
                 t[i][j]=t[i-1][j];
            }
        }
    }

    return t[n][sum];

}

int main(){

    int n;
    cin>>n;

    int arr[n],sum=0;

    for(int i=0;i<n;i++){
        cin>>arr[i];
        sum+=arr[i];
    }

    if(sum%2==0){

        cout<<subsetsum(arr,sum/2,n);
    }

}
