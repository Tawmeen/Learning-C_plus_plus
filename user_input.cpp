#include<iostream>
using namespace std;


int main(){
    string name;
    int age;

    cout<<"what is your age?:";
    cin>>age;

    cout<<"what is your full name?:";
    getline(cin>>ws,name);
    // getline funcation help us to contain string with space.


     cout << "Hello " << name <<'\n';
     cout << "you are " << age << " years old";










    return 0;
}