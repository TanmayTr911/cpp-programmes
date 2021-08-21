#include <bits/stdc++.h>
using namespace std;

#define N 100
#define W 100


int t[N+1][W+1];

int main(){

    int n; cin>>n;
    int  arr[n];

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    
    int sum; cin>>sum;

    for(int i=0;i<n+1;i++){
        for(int j=0;j<sum+1;j++){
            if(i==0){
                t[i][j]=0;
            }
            if(j==0){
                t[i][j]=1;
            }
        }   
        
    }

    for(int i=1;i<n+1;i++){

        for(int j=1;j<sum+1;j++){

            if(arr[i-1]<=sum){

                t[i][j]=t[i-1][j-arr[i-1]] + t[i-1][j];
            }

            else{
                t[i][j]=t[i-1][j];
            }
        }
    }

    cout<<t[n][sum];

}