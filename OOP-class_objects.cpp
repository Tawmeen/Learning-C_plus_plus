#include<iostream>
using namespace std;

class student
{
public:
    int id;
    double gpa;

};


int main(){

    student tawmeen,dhrubo;
    tawmeen.id =101;
    tawmeen.gpa =3.99;
    cout<<tawmeen.id<<" "<<tawmeen.gpa<<endl;

    dhrubo.id =102;
    dhrubo.gpa =3.88;
    cout<<dhrubo.id<<" "<<dhrubo.gpa<<endl;



    return 0;
}