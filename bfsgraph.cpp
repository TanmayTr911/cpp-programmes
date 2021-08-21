#include <bits/stdc++.h>
using namespace std;

#define rep(i,a,b) for(int i=a;i<b;i++)

#define vi vector <int>
#define vvi vector <vi>

int main(){

    int n;
    cin>>n;

    bool vis[n+1];

    rep(i,0,n+1){
        vis[i]=0;
    }

    vi adjl[n+1];

    rep(i,0,n){

        int x,y;
        cin>>x>>y;

        adjl[x].push_back(y);
        adjl[y].push_back(x);


    }

    queue <int> q;

    q.push(1);

    while(!q.empty()){

        int node=q.front();
        
        cout<<node;
        vis[1]=1;
        q.pop();
        

        vi ::iterator it;
        
        for(it=adjl[node].begin();it!=adjl[node].end();it++){

            if(vis[*it]==0){
                
                q.push(*it);

                vis[*it]=1;
            }

            
        }
    }
}
