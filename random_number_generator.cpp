#include<bits/stdc++.h>
using namespace std;
int main()
{

// pesudo-random = Not truly random (but close)

srand(time(NULL));

int num1 =(rand() % 6) +1;
int num2 =(rand() % 6) +1;
int num3 =(rand() % 6) +1;

cout<< num1 <<'\n';
cout<< num2 <<'\n';
cout<< num3 <<'\n';


    return 0;
}