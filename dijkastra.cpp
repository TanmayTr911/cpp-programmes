#include <bits/stdc++.h>
using namespace std;

#define rep(i,a,b) for(int i=a;i<b;i++)

#define vi vector <int>
#define vvi vector <vi>
#define vvpi vector <vector<pair<int,int>>>

#define N 10e5+6
#define inf 1e9

vvpi edge(N);

//vector <bool> vis(N,false);
vi dist(N,inf);

void minweight(int src){
    
    dist[src]=0;
    set <pair<int,int>> s;
    
    s.insert({0,src});
    
    while(!s.empty()){
        
        auto x=*(s.begin());
        //vis[x.]
        
        vis[x.second]=1;
        s.erase(x);
        
        for(auto it : edge[x.second]){
            
            //if(vis[it.first]){
              //  continue;
            //}
            else{
                if(dist[it.first]>(dist[x.second]+it.second)){
                
                    s.erase({dist[it.first],it.first});
                    dist[it.first]=dist[x.second]+it.second;
                    s.insert({dist[it.first],it.first});
                }
            
            }
        }
    }
    
    
}

int main() {
	// your code goes here
	int n,m;
	cin>>n>>m;
	
	
	
	rep(i,0,m){
	    
	    int u,v,w;
	    cin>>u>>v>>w;
	    
	    edge[u].push_back({v,w});
	    edge[u].push_back({v,w});
	    
	}
	
	int src;
	cin>>src;
	
	minweight(src);
	
	rep(i,1,n+1){
        
        if(dist[i]<inf){
            cout<<dist[i]<<" ";
        }
        
        else{
            cout<<-1<<" ";
        }
        
        
    }
    
	return 0;
}
