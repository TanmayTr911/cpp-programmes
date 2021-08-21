#include <iostream>
#include <climits>
using namespace std;

bool issafe(int arr[],int length, int num,int minpages){
        int sum=0;
        int stud=1;
        for(int i=0;i<length;i++){

            if(arr[i]>minpages){
                return false;
            }
            sum+=arr[i];

            if(sum>minpages){
                stud++;
                sum=arr[i];
                if(stud>num){
                    return false;
                }
            }
        }
        return true;

}

int pagealloc(int arr[],int length,int num){

    int low=0;
    int result=INT_MAX;
    int high=0;

    for(int i=0;i<length;i++){
        high+=arr[i];
    }

    while(low<=high){
        int mid=(high+low)/2;

        if(issafe(arr,length,num,mid)){
            result=min(result,mid);
            high=mid-1;
        }
        else{
            low=mid+1;
        }
    }
    return result;
}

int main(){

    int arr[]={10, 20, 60, 50, 30, 40};
    int n=4;
    int m=2;

    cout<<pagealloc(arr,n,m);

}