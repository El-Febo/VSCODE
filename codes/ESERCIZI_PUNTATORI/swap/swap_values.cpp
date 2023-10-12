#include<iostream>
using namespace std;

void scambio(double *a, double *b){
    double t = *a;
    *a = *b;
    *b = t;
}



int main(){
    double y, x;

    cin >> x >> y;
    scambio(&x, &y);
    cout << x << " " << y << "\n";
}