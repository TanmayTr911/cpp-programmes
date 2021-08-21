#include<iostream>
using namespace std;

int main()
{
    int num;
    int count;
    cout<<"enter a number whose number of 2devisors need to be found";
    cin>> num;
    for(count=0;num%2==0;count++){
        num=num/2;
    }
    cout<<"exponents of 2 in given number are"<<count;
}