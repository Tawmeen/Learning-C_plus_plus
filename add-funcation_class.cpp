 #include<iostream>
using namespace std;

class student
{
public:
    int id;
    double gpa;

    void display(){
        cout<<id<<" "<<gpa<<endl;
    }

};


int main(){

    student tawmeen,dhrubo;
    tawmeen.id =101;
    tawmeen.gpa =3.99;

tawmeen.display();

    dhrubo.id =102;
    dhrubo.gpa =3.88;

dhrubo.display();


    return 0;
}