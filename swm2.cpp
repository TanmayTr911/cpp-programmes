#include <iostream>
#include <climits>
using namespace std;

int main(){

    int n,x;
    cin>>n>>x;

    int arr[]={1,4,45,53,10,19};

    //for(int i=0;i<n;i++){
        //cin>>arr[i];
    //}

    int i=0,j=0,sum=0,ans=INT_MAX;

    while(j<n){

        while(sum<=x){
            sum+=arr[j];
            j++;
        
            }

        
        while(sum>x){
                
            int size=j-i+1;
            ans = min(size,ans);
            sum-=arr[i];
            i++;
        
            }
        
        

    }
    cout<<ans;
}