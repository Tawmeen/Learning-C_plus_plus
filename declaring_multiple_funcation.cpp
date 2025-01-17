#include<iostream>
using namespace std;


void implementation(int,int);
void subtraction(int,int);
void multiplication(int,int);
void division(int,int);

int main(){
implementation(56,78);
subtraction(50,76);
multiplication(105,78);
division(56,78);
}
void implementation(int a, int b){
    int sum =a+b;
    cout <<"sum: "<<sum<<endl;
}

void subtraction(int a, int b){
    int sub=a-b;
    cout<<"sub: "<<sub<<endl;
}
void multiplication(int a, int b){
    int mul=a*b;
    cout <<"mul: "<<mul<<endl;
}
void division(int a, int b){
    float div=(float)a/b;
    cout <<"div: "<<div<<endl;
}