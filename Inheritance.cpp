#include<iostream>
using namespace std;
class person
{
    public:
    string name;
    int age;
    void display1()
    {
        cout<<"Name: "<<name<<endl;
        cout<<"Age: "<<age<<endl;
    }
};
class student:public person{
    public:
    int id;
    void display1();
    void display2()
    {
        cout<<"ID: "<<id<<endl;
        display1();
    }
};
int main()
{
    student s1;
    s1.name="Tawmeen";
    s1.age=20;
    s1.id=101;
    s1.display1();
    return 0;
}
