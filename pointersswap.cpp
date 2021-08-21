#include <iostream>
using namespace std;

void swap(int *a,int *b){
    int temp= *b;
    *b = *a;
    *a = temp;
    }
int main(){
    int a=2,b=4;

    int arr[4]= {12,23,34,56,};

    for(int i=0;i<4;i++){
        cout<<*(arr+i)<<endl;
    }
    //& is used to get memory adress
    // using reference calling
    //* is used for defining pointers
    //eg int *ptra = &a gives pointer ptra the location of a
    swap(&a,&b);
    cout<<a<<"  "<<b<<endl<<*f;
}