#include <bits/stdc++.h>
using namespace std;

const int N=100;
const int W=100;

bool t[N][W];

int main(){

    int n; cin>>n;

    int arr[n];

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int sum; cin>>sum;

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

            if(arr[i-1]<=j){
                t[i][j]=(t[i-1][j-arr[i-1]] || t[i-1][j]);
            }

            else{
                t[i][j]=t[i-1][j];
            }
        }
    }

    cout<<t[n][sum];



}