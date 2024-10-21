#include<iostream>
using namespace std;

typedef string text_t;

typedef int number_t;


int main(){

//"typedef"=reserved keyword used to create an additional name 
//          (alias) for another data type.
//           New identifier for an existing type.
//           Helps with readability and reduces typos
//          Use when there is a clear benefit.
//          Replace with 'using'(work better w/ templates)
       
     text_t firstName="Tawmeen";

     number_t age=20;

     std::cout<<firstName<<endl;
     std::cout<<age<<endl;





    return 0;
}