#include <bits/stdc++.h>
using namespace std;

#define rep(i,a,b) for(int i=a;i<b;i++)

#define vi vector <int>
#define vvi vector <vi>
bool vis[8];
vi adjl[8];



void dfs(int num){

    vis[num]=1;

    //preorder print
    cout<<num<<" ";

    vi :: iterator it;
    
    for(it=adjl[num].begin();it!=adjl[num].end();it++){

        if(vis[*it]==0){
            dfs(*it);

        }

    }

    //postorder print
    //  cout<<num<<" ";


}

int main(){

    //int n;
    //cin>>n;

   

    rep(i,0,7){
        vis[i]=0;
    }

    
    rep(i,0,7){

        int x,y;
        cin>>x>>y;

        adjl[x].push_back(y);
        adjl[y].push_back(x);


    }

    dfs(1);


}