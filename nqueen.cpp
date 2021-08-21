#include <bits/stdc++.h>
using namespace std;

bool issafe(int arr[4][4],int row,int col){
        
        int i,j;
        //upper col check 
    for( i=0;i<row;i++){
        if(arr[i][col]==1){
            return false;
        }

    }
        //upper left diag check
    for(i=row;i>=0;i--){
            for( j=col;j>=0;j--){
                if(arr[i][j]==1){
                    return false;
                }
            }
        }
        // upper right daig check
    for( i=row;i>=0;i--){
            for( j=col;j<4;j++){
                if(arr[i][j]==1){
                    return false;
                }
            }
        }

    return true;


    
}

bool nqueen( int arr[4][4] ,int row){

    //int arr[n][n];

    if (row==4){
        return true;
    }

    for (int col=0;col<4;col++){

        if (issafe(arr,row,col)){

            arr[row][col]=1;

            if(nqueen(arr,row+1)){
                return true;

            }

            arr[row][col]=0;  
        }
    }
    return false;



}

int main(){

    int arr[4][4]={{0,0,0,0},
                 {0,0,0,0},
                 {0,0,0,0},
                 {0,0,0,0}};

    int row=1;           

    cout<<nqueen(arr,row)<<endl;

    for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

}