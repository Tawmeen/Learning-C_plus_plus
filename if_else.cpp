#include <iostream>
using namespace std;

int main(){

    //if statement = do somthing if a condition is true.
    //               if not,then don't do it.

    int age;
    cout<<"Enter your age: ";
    cin>>age;

    if(age>=100){
    cout<<"you are too old to enter the site!";

}

    else if(age>=18){
cout<<"Welcome to this site";
    }

else if(age<0){
    cout << "you haven't been born yet!";

}



    else{
        cout<<"You are not old enough to enter!";
    }
    




    return 0;
}