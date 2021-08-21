#include <iostream>
#include <climits>
using namespace std;

bool issafe(int arr[],int length,int painters,int maxboards){

    int num=1;
    int sum=0;

    for(int i=0;i<length;i++){

        sum+=arr[i];
        if(sum>maxboards){
            num++;
            sum=arr[i];
            if(num>painters){
                return false;
            }
        }
    }

    return true;
}

int painterminimizemaxboards(int arr[],int length,int painters){

    int res=INT_MAX;
    int low=arr[3];
    int high=0;

    for(int i=0;i<length;i++){
        high+=arr[i];
    }

    while(high>low){
        int  mid=(high+low)/2;

        if(issafe(arr,length,painters,mid)){
            high=mid;
            res=min(res,mid);
        }

        else{
            low=mid+1;
        }
        }
    return res;
}

int main(){

    int arr[]={10, 20, 60, 50, 30, 40};
    int n=4;
    int m=2;

    cout<<painterminimizemaxboards(arr,n,m);
}