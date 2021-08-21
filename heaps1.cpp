#include <bits/stdc++.h>
using namespace std;

int  main(){

    priority_queue  <pair<int,int>>  minheap;

    int n,k,m;
    cin>>n>>k>>m;
    int arr[n];

    //vector <int> v;

    for(int i=0;i<n;i++){

        cin>>arr[i];

    } 

    for(int i=0;i<n;i++){

        minheap.push(make_pair(abs(m-arr[i]),arr[i]));

        if(minheap.size()>k){
            minheap.pop();
        }


    }
    while(minheap.size()!=0){
        //v.push_back(minheap.top());
        cout<<minheap.top().second<<" ";
        minheap.pop();
    }
   // for(int i=0;i<v.size();i++){
     //   cout<<v[i]<<" ";
    //}


}