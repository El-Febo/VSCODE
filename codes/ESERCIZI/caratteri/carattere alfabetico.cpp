#include<iostream>
using namespace std;

void Maiuscola(char *C);


int main(){
    char lettera;
    cout << "Inserisci un carattere alfabetico: ";
    cin >> lettera;
    char *c = &lettera;
    
    
    if(lettera >= 'a' && lettera <= 'z'){
        Maiuscola(c);
        cout << "\n" << (char)lettera << "\n";        
    }
    else
        cout << "\nNon è un carattere alfabetico  minuscolo \n";
}

void Maiuscola(char *C){
    *C -= 32;
}
