#include <bits/stdc++.h>
using namespace std;

#define vi vector<int>
#define gi greater<int>
#define rep(i,a,b) for(int i=a;i<b;i++)


int main(){

    priority_queue <int , vi,gi> pq;

    int n;
    cin>>n;

    rep(i,0,n){
        int m;
        cin>>m;

        pq.push(m);
    }

    while(pq.size()>=2){

        int sum=pq.top();
        pq.pop();
        sum+=pq.top();
        pq.pop();

        pq.push(sum);
    }

    //cout<<pq.top();

    while(!pq.empty()){

        cout<<pq.top();
        pq.pop();
    }
    
}