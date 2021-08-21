#include <iostream>
using namespace std;

class student{
    public:
    string name;
    int age;
    bool gender;

    student(string s,int a,bool g){
        name=s;
        age= a;
        gender = g;
    }
    
    student(){}

    void setname(string s){
        name=s;

    }

    student(student &x ){
        name=x.name;
        age= x.age;
        gender=x.gender;
    }

    void getname(){
        cout<<name<<endl;
    }

    void printinfo(){
        cout<<name<<" ";
        cout<<age<<" ";
        cout<<gender<<endl ;
    }
}; 


int main(){

    student a;
        a.name="tanmay";
        a.age =18;
        a.gender = 1;
    
    
    student arr[3];
    for(int i=0;i<3;i++){
        cout<<"name";
        cin>>arr[i].name;
        cout<<"age";
        cin>>arr[i].age;
        cout<<"gender";
        cin>>arr[i].gender;


    }

    a.printinfo();
    for(int i=0;i<3;i++){
        arr[i].printinfo();
    }
    
    student c=a;

    student s("srt",12,1);
    s.getname();
}

