#include <iostream>
#include <algorithm>

using namespace std;

bool issafe(int arr[],int length,int mid,int num ){

    int pos=0;
    int count=1;

    for(int i=1;i<length;i++){
        if(arr[i]-arr[pos]>=mid){
            pos=i;
            count++;

            if(count==num){
                return true;
            }
        }
    }

    return false;
}

int maximummindistn(int arr[],int length,int num){

    sort(arr,arr+length);
    int result=-1;
    int left=arr[0];
    int right=arr[length-1];

    while(right>left){
        int mid=(left+right)/2;

        if(issafe(arr,length,mid,num)){
            result=max(result,mid);
            left=mid+1;
            }
        else{
            right=mid;
        }
    }
    return result;
}

int main(){

    int arr[]={3,2,8,4,9};
    int n=5;
    int k=3;
    cout<<maximummindistn(arr,5,3);

}