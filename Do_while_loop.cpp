#include<iostream>
using namespace std;
int main(){

// do while loop = do some block of code first,
//                 THEN repeat agian if condition is true.


int number;

do{
    cout << "Enter a positive number: ";
    cin >>number;
}while(number < 0);
 cout << "The Number is: " << number;





    return 0;
}