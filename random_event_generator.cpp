#include<iostream>
#include<ctime>
using namespace std;
int main()
{
srand(time(0));

int randNum = rand () % 5+1;


switch(randNum){

case 1:cout << "You win a bumper sticker!\n";
       break;
case 2:cout << "You win a bumper T-shirt!\n";
       break;
case 3:cout << "You win a bumper I-phone!\n";
       break;
case 4:cout << "You win a bumper Bike!\n";
       break;
case 5:cout << "You win a bumper Car!\n";
       break;




}





    return 0;
}