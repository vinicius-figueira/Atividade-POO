#include "Data.h"
#include <iostream>
using namespace std; 

int main(){
    Data hoje;
    cin >> hoje.dia;
    cin >> hoje.mes;
    cin >> hoje.ano;

    cout << hoje.dia << "/" << hoje.mes << "/" << hoje.ano << endl;
    
}