#include <bits/stdc++.h>
using namespace std;

#define N 100
#define W 100

int t[N+1][W+1];

int main(){

    int n; cin>>n;

    int val[n];
    //int range=0;
    for(int i=0;i<n;i++){
        cin>>val[i];
        //range+=arr[i];
    }

    int w; cin>>w;

    for(int i=0;i<n+1;i++){
        for(int j=0;j<w+1;j++){
            if(i==0){
                t[i][j]=0;
            }

            if(j==0){
                t[i][j]=1;
            }
        }
    }

    int wt[n];
    for(int i=0;i<n;i++){
        wt[i]=i+1;
    }

    for(int i=1;i<n+1;i++){
        for(int j=1;j<w+1;j++){

            if(wt[i-1]<=j){
                t[i][j]=max(val[i-1]+t[i][j-wt[i-1]],t[i-1][j]);
            }

            else{
                t[i][j]=t[i-1][j];
            }
        }
    }

    cout<<t[n][w];
}