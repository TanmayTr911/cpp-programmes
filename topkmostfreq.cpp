#include <bits/stdc++.h>
using namespace std;

int main(){

    int arr[]={2,2,2,3,3,4,3,2,4,5,6,7};

    map <int,int> mp;

    for(int i=0;i<9;i++){
        mp[arr[i]]++;
    }

    priority_queue <pair<int,int>,vector<pair<int,int>>, greater <pair<int,int>>> pq;

    map <int,int> :: iterator it;

    for(it=mp.begin();it!=mp.end();it++){

            pq.push(make_pair(it->second,it->first));

            if(pq.size()>3){
                pq.pop();
            }
    }

    while(!pq.empty()){
        cout<<pq.top().second<< "  ";
        pq.pop();
    }

}