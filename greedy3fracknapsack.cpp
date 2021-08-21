#include <bits/stdc++.h>
using namespace std;

#define ff first
#define ss second
#define map1 map<double,int>
#define rep(i,a,b) for(int i=a;i<b;i++)

int main(){

    map1 mp;
    int n;
    cin>>n;

    rep(i,0,n){

        int netprice, noofitem;
        cin>>netprice>>noofitem;

        mp[netprice/noofitem]=noofitem;

    }

    int weight,totalprice=0,currweight=0;
    cin>>weight;
    
    map1 :: reverse_iterator it;
    //cout<<totalprice;

    for(it=mp.rbegin(); it!=mp.rend();it++ ){

        currweight+=it->ss;
        if(currweight<weight){
            
            totalprice+=(it->ss)*(it->ff);   
            //cout<<totalprice;     
            }

        else if(currweight>weight){
            currweight-=it->ss;
            totalprice+=(weight-currweight)*(it->ff);
            break;
        }

        //cout<<it->second<<"  "<<it->first<<endl;

    }

   cout<<totalprice;
}