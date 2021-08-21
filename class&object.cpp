#include <iostream>
using namespace std;

class student{
    public:
    string name;
    int age;
    bool gender;

    void printinfo(){
        cout<<name;
        cout<<age;
        cout<<gender;
    }
} 


int main(

    student a{
        a.name="tanmay";
        a.age =18;
        a.gender = 1;
    }

    printinfo();


)