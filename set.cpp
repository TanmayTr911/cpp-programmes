#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){

    multiset <int> s;
    s.insert(1);
    s.insert(2);
    s.insert(3);
    s.insert(3);
    s.insert(5);

    //s.erase(3);
   
    set <int> :: iterator i,i1;
    for(i=s.begin();i!=s.end();i++){
        cout<<*i<<endl;
    }
    i1= s.lower_bound(3);
    cout<<*i1;
    


}