#include <bits/stdc++.h>
using namespace std;

#define rep(i,a,b) for(int i=a;i<b;i++)

#define vi vector <int>
#define vvi vector <vi>
vi parent(1000);
vi sz(1000);

void make_set(int v){

    parent[v]=v;
    sz[v]=1;
}

int find_set(int v){

    if(parent[v]==v){
        return v;
    }
    else{
    return parent[v]=find_set(parent[v]);
    }
}

void union_set(int a,int b){
    a=find_set(a);
    b=find_set(b);

    if(a!=b){
        if(sz[a]<sz[b]){
            swap(a,b);
        }
        parent[b]=a;
        sz[a]+=sz[b];
    }
}

int main(){

    int n,m;
    cin>>n>>m;
    
    rep(i,0,n){
        make_set(i);
    }

    vvi edge;

    rep(i,0,m){

        int u,v;
        cin>>u>>v;

        edge.push_back({u,v});
    }

    bool cycle=false;
    
    //vvi :: iterator it;
    
    for(int i=0;i<edge.size();i++){
        
        //cout<<123;
        int u=edge[i][0];
        int v=edge[i][1];
        //cout<<u<<" "<<v;
        int x=find_set(u);
        int y=find_set(v);
        
        cout<<x<<y<<" ";
        if(x==y){
            cycle=true;
        }
        else{
            union_set(u,v);
            
        }

    }

    if(cycle){
        cout<<"cycle exist";
    }

    else{
        cout<<"no cycle";
    }
}

