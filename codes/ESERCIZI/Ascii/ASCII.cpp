#include<iostream>
using namespace std;


int main(){
    int a, b;
    do{
        cin >> a >> b;
    }while(a < 0 || b > 127 || a > b);


    for(char i = a; i < b; i++)
        cout << (char)i << endl;

}