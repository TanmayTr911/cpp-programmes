#include <iostream>
using namespace std;

int main(){
    cout<<"______________MENU_________________ \n"<<" --------------------------------- \n"<<"1.> Plus(+) \n"<<"2.> Minus(-) \n"<<"3.> Multiply(*) \n"<<"4.> Divide(/) \n"<<"5.> Equality check(=) \n";   int a,b;
    cout<<"enter 1st number";
    cin>>a;
    char op; 
    cout<<"enter operator";
    cin>>op;
    cout<<"enter 2nd number";
    cin>>b;
    switch(op)
    {
    case '+':
    cout<<"Answer->"<<a+b;
    break;
    case '-':
    cout<<"Answer->"<<a-b;
    break;
    case '*':
    cout<<"Answer->"<<a*b;
    break;
    case '/':
    cout<<"Answer->"<<a/b;
    break;
    case '=':
    if(a==b){
        cout<<"number are equal";
        break;
    }
    else{
        cout<<" numbers are not equal";
        break;
    }
    default:
    cout<<"still learning more";
        break;
    }
    }