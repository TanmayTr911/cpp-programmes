#include <iostream>
using namespace std;
int main(){

    int a,b,c,h,g,k;
    cout<<"1st num";
    cin>>a;
    cout<<"2nd num";
    cin>>b;
    cout<<"3rd num";
    cin>>c;
    h=c^2;
    g=b^2;
    k=a^2;
    if(a>b){
        if(c>a){
            if(h==g+k){
                cout<<"pythogorian triplet";
            }
            else if(h!=g+k){
                cout<<"non pythogorian triplet";
            }
         
        }
        else if(a>c){
            if(k==h+g){
                cout<<"pythogorian triplet";
            }
            else if(k!=h+g){
                cout<<"non pythogorian triplet";
            }

        }
    }
    else if(b>a){
        if(c>b){
            if(h==g+k){
                cout<<"pythogorian triplet";
            }
            else if(h!=g+k){
                cout<<"non pythogorian triplet";
            }
         
        }
        else if(b>c){
            if(g=h+k){
                cout<<"pythogorian triplet";
            }
            else if(g!=h+k){
                cout<<"non pythogorian triplet";
            }

        }

    }

}