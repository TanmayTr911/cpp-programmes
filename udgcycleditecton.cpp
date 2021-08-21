#include <bits/stdc++.h>
using namespace std;

#define rep(i,a,b) for(int i=a;i<b;i++)

#define vi vector <int>
#define vvi vector <vi>

bool iscycle(int src,vvi adjl,bool* visited,int parent){

    visited[src]=1;

    vi :: iterator it;

    for(it=adjl[src].begin();it!=adjl[src].end();it++){

        if(*it!=parent){
            if(visited[*it]){
                return true;
            }
            else{
                return iscycle(*it,adjl,visited,src);
            }
        }
    }

    return false;
}

int main(){
    int n,m;

    cin>>n>>m;
    vvi adjl(10);
    bool visited[10];

    bool cycle=0;

    rep(i,0,m){

        int x,y;

        cin>>x>>y;
        adjl[x].push_back(y);
        adjl[y].push_back(x);
    }
    
    rep(i,0,n){
        visited[i]=0;
    }

    rep(i,0,n){

        if(!visited[i] && iscycle(i,adjl,visited,-1)){
            cycle=1;
            cout<<"cycle exist";
        }
    }

    if(cycle==0){
        cout<<" no cycle exist";
    }

}