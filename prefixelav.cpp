#include <iostream>
#include <stack>
using namespace std;

int prefixevaluation( string s){

    stack <int> st;

    int opr1;
    int opr2;

    for(int i=s.length()-1; i>=0;i--){

        if(s[i]>='0' && s[i]<='9'){
            
            st.push(s[i]-'0');
        }
        else{

            opr1=st.top();
            st.pop();

            opr2= st.top();
            st.pop();
        }

        switch(s[i]){

            case '+':
            st.push(opr1+opr2);
            break;

            case '-':
            st.push(opr1-opr2);
            break;

            case '*':
            st.push(opr1*opr2);
            break;

            case '/':
            st.push(opr1/opr2);
            break;
        }
    }
    return st.top();

}

int main(){

    cout<<prefixevaluation("-+7*45+20");
}

