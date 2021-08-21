 #include <bits/stdc++.h>
using namespace std;

#define rep(i,a,b) for(int i=a;i<b;i++)

#define vi vector <int>
#define vvi vector <vi>

int main(){

    int n,m;
    cin>>n>>m;


    vvi adjl(n);
    //bool vis[n+1];
    map <int,int> indegree;

    //rep(i,0,n+1){
      //  vis[i]=0;
    //}
    
    rep(i,0,n){
        indegree[i]=0;
    }



    rep(i,0,m){

        int x,y;
        cin>>x>>y;
    
        //x-->y

        adjl[x].push_back(y);
        indegree[y]++;
        
    }

    queue <int> q;

    rep(i,0,n){
        if(indegree[i]==0){
            q.push(i);
        }
    }

    while(!q.empty()){

        int flag=q.front();
        q.pop();

        cout<<flag<<"  ";

        //vis[flag]]++;

        vi :: iterator it;
        for(it=adjl[flag].begin();it!=adjl[flag].end();it++){
            indegree[*it]--;

            if( indegree[*it]==0){
                q.push(*it);
            }

        }


    }
}