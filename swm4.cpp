#include <iostream>
#include <string>
using namespace std;

bool ispal(string s){
    int end=s.length();
    int mid=end/2;

    for(int i=0;i<mid;i++){
        if(s[i]!=s[end-i-1]){
            return false;
        }
    }

    return true;

}

int  main(){

    string arr[]={"rs","tr","gf","ni","t","in"};

    int n=6;
    int k=3;

    int i=0,j=0;

    string sum="";

    while(j<n){

        while(j-i<k){
            sum+=arr[j];
            j++;
        }
        //cout<<sum;
        if(ispal(sum)){
            cout<<sum;
            break;
        }

        string del=arr[i];
        int size=del.length();
        sum=sum.substr(size);
        i++;

    }
}