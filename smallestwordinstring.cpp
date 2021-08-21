#include <iostream>
#include <string>
#include <climits>

using namespace std;

int main(){

    string minlengthword,currentword;

    int currentlength;
    int j=0,count=0;
    int minlength=INT_MAX;

    string givenstring;
    getline(cin,givenstring);

    int len=givenstring.length();
    //cout<<len;

    for(int i=0;i<=len;i++){
        
        if(givenstring[i]!=' '){
           
            currentword+=givenstring[i];
            
        }

        else{             
            
            j=i+1;
            currentlength=currentword.length();
             
            
            
            minlength=min(minlength,currentlength);
        

            if(minlength==currentlength){
                minlengthword=currentword;
            }


            currentword.clear();
        }
    }

    cout<<minlengthword;
}