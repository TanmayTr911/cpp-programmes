#include <bits/stdc++.h>
using namespace std;

int search(int arr[],int num,int left,int right){

    if(left>right){
        return -1;
    }

    int mid=(left+right)/2;

    if(arr[mid]==num){
        return mid;
    }

    if(arr[left]<=arr[mid]){
        if(arr[left]<num && arr[mid-1]>num){
            return search(arr,num,left,mid-1);
        }
        return search(arr,num,mid+1,right);
    }

    if(arr[right]>num && arr[mid+1]<num){
        return search(arr,num,mid+1,right);
    }
    return search(arr,num,left,mid-1);

}

int main(){

    int arr[]={50,60,10,20,30,40};
    int n=60;

    int l=0;
    int r=5;

    cout<<search(arr,n,l,r);


}