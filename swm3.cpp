#include <iostream>
#include <climits>
using namespace std;

int main(){

    int arr[]={8,23,45,12,56,4};
    int n=6;
    int k =3;

    int i=0,j=0,sum=0;

    while(j<n){
        while(j-i<k){
            sum+=arr[j];
            j++;
        }

        if(sum%3==0){
            for(int t=i;t<j;t++){
                cout<<arr[t]<<" ";
            }
            break;
        }

        sum-=arr[i];
        i++;
    }


}