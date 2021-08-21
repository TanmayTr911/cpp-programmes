#include <bits/stdc++.h>
using namespace std;

#define vi vector <int>
#define vvi vector <vi>
#define rep(i,a,b) for (int i=a;i<b;i++)

#define N 10e5+6

vi parent(N);
vi sz(N);

bool sortcol( const vector<int>& v1,
               const vector<int>& v2 ) {
 return v1[2] < v2[2];
}

void make_set(int v){
    parent[v]=v;
    sz[v]=1;
}

int find_set(int v){

    if(parent[v]==v){
        return v;

    }

    return parent[v]=find_set(parent[v]);
}

void union_set(int a,int b){

    int x=find_set(a);
    int y=find_set(b);

    if(x!=y){
        if(sz[x]<sz[y]){
            swap(x,y);
        }

        parent[y]=x;
        sz[x]+=sz[y];
    }
}

int main(){

    int n,m;cin>>n>>m;

    rep(i,0,n+1){
        make_set(i);
    }

    vvi edge;
    rep(i,0,m){
        int u,v,w;cin>>u>>v>>w;

        edge.push_back({u,v,w});
    }

    sort(edge.begin(),edge.end(),sortcol);
    int cost=0;

    for(int i=0;i<edge.size();i++){
        int u=edge[i][0];
        int v=edge[i][1];
        int w=edge[i][2];

        int x=find_set(u);
        int y=find_set(v);

        if(x==y){
            continue;
        }
        else{
            cout<<u<<"  "<<v<<endl;
        union_set(u,v);
        cost+=w;
        }
    }

    cout<<cost;
}