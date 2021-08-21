#include <bits/stdc++.h>
using namespace std;

#define rep(i,a,b) for(int i=a;i<b;i++)

#define vi vector <int>
#define vvi vector <vi>

int main(){

    /*int arr[7][7]={0};

    rep(i,0,7){

        int x,y;
        cin>>x>>y;

        arr[x-1][y-1]=1;
        arr[y-1][x-1]=1;

    }

    rep(i,0,7){
        rep(j,0,7){
            cout<<arr[i][j]<<" ";
        }

        cout<<endl;
    }*/

    vi adjl[8];

    rep(i,0,7){

        int x,y;
        cin>>x>>y;

        adjl[x].push_back(y);
        adjl[y].push_back(x);

    }

    rep(i,1,8){

        vi  :: iterator it;


        for(it=adjl[i].begin();it!=adjl[i].end();it++){

            cout<<*it;
            }
        cout<<endl;
    }
}