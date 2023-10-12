#include<iostream>
using namespace std;

int Divisione(int dividendo, int divisore, int &resto){
    int Quoziente = 0;
    
    
    if(dividendo == divisore)
        return 1;
    
    while(dividendo > divisore){
        Quoziente++;
        dividendo -= divisore;
        resto = dividendo;
    }

    
    return Quoziente;
}


int main(){
    int a, b;
    int r = 0;
    cin >> a >> b;
    
    cout << "a / b = " << Divisione(a, b, r) << " con resto " << r;
}