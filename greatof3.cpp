#include<iostream>
using namespace std;

int main()
{
    int a,b,c;
    cout<<"                To Find Greatest of 3 Numbers\n "<<"--------------------------------------------------------- \n"<<"Give 1st Number :";
    cin>> a;
    cout<<"Give 2nd Number :";
    cin>> b;
    cout<<"Give 3rd Number :";
    cin>> c;
    if(a>b){
        if(c>a){
            cout<<"Greatest Number Is :"<<c;
            }

        else{
            cout<<"Graetest Number Is :"<<a;
                    } 
                    }
    else if(a=b=c){
        cout<<"all are equal";
    }

    else{
        if(c>b){
            cout<<"Greatest Number Is :"<<c;
            }

        else{
            cout<<"Greatest Number Is :"<<b;
        }    
        
    }  
        
    

    return 0;

}