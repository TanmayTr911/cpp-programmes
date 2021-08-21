#include <bits/stdc++.h>
using namespace std;

#define vi vector <int>
#define vvi vector <vi>
#define rep(i,a,b) for (int i=a;i<b;i++)

#define N 10e5+6
#define inf 1e9

vvi adj;
vector <bool> vis(N,false);
vi dist(N,inf);
int cost=0;

void primsmst(int src){

    vvi s;
    dist[src]=0;
    vis[src]=1;

    s.push_back({dist[src],src});

    while(!s.empty()){

        //set <vi> :: iterator x;
        int *x=s[0];
        vis[x[1]]=1;
        s.erase(x);
        int w=x[0];
        cost+=w;

        for(int i=0;i<adj.size();i++){
            
            if(vis[adj[i][1]]){
                continue;
            }

            if(dist[adj[i][0]]>adj[i][1]){
                s.erase(dist[adj[i][0]],adj[i][0]);
                dist[adj[i][0]]=adj[i][1];
                s.insert(adj[i][1],adj[i][0])
            }
        }
    }

}

int main(){

    int n,m;
    cin>>n>>m;

    adj=vvi(n);

    rep(i,0,m+1){
        int u,v,w;
        cin>>u>>v>>w;

        adj[u].push_back({v,w});
        adj[v].push_back({u,w});

    }

    primsmst(0);
    cout<<cost;



}