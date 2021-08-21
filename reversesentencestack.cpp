#include <iostream>
#include <stack>
#include <string>
using namespace std;

int main(){
stack <string> st;
string word="";

string s;
getline(cin,s);


for(int i=0;i<=s.length();i++){

    word+=s[i];
    
    if(s[i] == ' ' || i==s.length()){
        if(i==s.length()){
            string space=" ";
            st.push(space);
        }
        st.push(word);
        
        
        word="";
            }

}
while(!st.empty()){
        cout<<st.top();
        st.pop();
    }
}
