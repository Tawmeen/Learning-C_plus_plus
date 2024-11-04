#include<iostream>
using namespace std;
int main(){

    //&& = cheak if two coditions are true.
    //|| = cheak if at least one of two condition is true.
    // ! = reverse the logical state of it's operand.

     int temp;
    cout<<"Enter the temperature: ";
    cin>>temp;

    if(temp>0 && temp<30){
        cout << "The temperature is good!";

    }
    else{
        cout <<"The temperature is bad!";
    }









    return 0;
}