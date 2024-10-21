#include<iostream>
using namespace std;
int main(){

//type conveeresion = conversion a vale one data type to another
//                    Impliciy = automatic
//                   Exlplicit = precrde value with new data type (int)



int correct = 8;
int question = 10;
double score = correct/(double)question*100;

cout << score <<"%";


    return 0;
}