#include<iostream>
using namespace std;

int main(){
    int num;
    int count;
    cout<<"enter a number whose prime factors are required";
    cin>>num;
    int r;
    for(r=2;r<=num;r++){
        for(int n=2;n<r;n++){
            if(r%n!=0){
                for(count=0;r%n==0;count++){
                    num=num/r;
                    }
            }       
            else{

                }

            
        
        }   
    cout<<"number of factors "<<r<<"are"<<count;
    }
}
