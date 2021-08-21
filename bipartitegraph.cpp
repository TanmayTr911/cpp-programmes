// imp not complete
//complete karna hai
//code correct not running properly


#include <bits/stdc++.h>
using namespace std;

#define rep(i,a,b) for(int i=a;i<b;i++)

#define vi vector <int>
#define vvi vector <vi>
int n,m;
vvi adjl;

vi color;
vector <bool> vis;
bool isbyprt;

void givecolor(int src,int col){

    if(color[src]!=-1 && color[src]!=col){
            isbyprt=false;
        
            return;
    }
    
    if(vis[src]){
        return;
    }
    color[src]=col;
    vis[src]=1;

    vi :: iterator it;

    for(it=adjl[src].begin();it!=adjl[src].end();it++){

        
            givecolor(*it,col xor 1 );

            //1 xor 1=0
            //0 xor 1=1
        
    }
    
}

int main(){
   
    cin>>n>>m;
    isbyprt=true;
    adjl=vvi(n);
    vis=vector <bool>(n,false);
    color=vi(n,-1);

    rep(i,0,m){
        int u,v;
        cin>>u>>v;

        adjl[u].push_back(v);
        adjl[v].push_back(u);

    }
    
    
    rep(i,0,n){

        if(!vis[i]){
        givecolor(i,0);
    
        }
    }

    if(isbyprt){
        cout<<"biprartite";
    
    }
    else{
        cout<<"not bipartite";
    }

}