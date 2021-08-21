#include <iostream>
using namespace std;

void printnuminc(int num){
    
    if(num==0){
        return;
    }
    printnuminc(num--);
    cout<<num<<endl;

}

int main(){
    printnuminc(100);
}