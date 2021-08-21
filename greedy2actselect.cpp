#include <bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cin>>n;

    map <int,int> mp;

    for(int i=0;i<n;i++){
        int str,end1;
        cin>>str>>end1;
        mp[end1]=str;
        }

    map <int,int> :: iterator it,it1;

    it1=mp.begin();
    int task=1;
    int ends=it1->first;

    for(it=mp.begin();it!=mp.end();it++){

        if(it->second>ends){
            task++;
            ends=it->first;
        }
    }
    cout<<task;


}