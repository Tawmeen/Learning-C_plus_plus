#include<iostream>
using namespace std;
int main(){

    string name;
    cout<<"Enter your name: ";
    getline(cin, name);
    if(name.length() > 12){
        cout<<"your name can't be over 12 charecter";
    }
    else{
        cout<< "welcome" <<name;
    }







    return 0;
}