#include <bits/stdc++.h>
using namespace std;

#define rep(i,a,b) for(int i=a;i<b;i++)

#define vi vector <int>
#define vvi vector <vi>

int n,m;
vvi adjl;
vector <bool> visited;


int getlen(int src){

    if(visited[src]){
        return 0;
    }
    
    visited[src]=1;
    int ans=1;
    

    vi :: iterator it;
    for(it=adjl[src].begin();it!=adjl[src].end();it++){
        if(!visited[*it]){
            ans+=getlen(*it);
            visited[*it]=1;
        }
    }

    return ans;
}


int main(){

    cin>>n>>m;
    adjl=vvi(n);
    visited=vector <bool> (n);
    vi connected;

    rep(i,0,m){

        int x,y;

        cin>>x>>y;
        adjl[x].push_back(y);
        adjl[y].push_back(x);
    }

    rep(i,0,n){

        if(!visited[i]){
            connected.push_back(getlen(i));
        }
    }

    rep(j,0,connected.size()){
        cout<<connected[j]<<" ";

    }



}