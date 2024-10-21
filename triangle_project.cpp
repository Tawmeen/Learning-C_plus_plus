#include<iostream>
#include<cmath>
using namespace std;
int main(){

    double a;
    double b;
    double c;

    cout << "Enter size A: ";
    cin>>a;

    cout << "Enter size B: ";
    cin>>b;
     
     //a = pow(a,2);
     //b = pow(b,2);
     c = sqrt(pow(a, 2) + pow(b, 2));

     cout << "Size C: " << c;






    return 0;
}