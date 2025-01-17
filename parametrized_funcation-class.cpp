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
    void setvalue(int x, double y){
        id = x;
        gpa = y;
    }

};


int main(){

    student tawmeen,dhrubo;
    
    tawmeen.setvalue(101,3.98);

tawmeen.display();

    dhrubo.setvalue(102,3.83);

dhrubo.display();


    return 0;
}