#include<iostream>
#include<cmath>
using namespace std;



double Pi(int N, double i = 1){   

    if(i < N)
        return (1 / ( (i)*(i) ) + Pi(N, i + 1)); 
}





int main(){
    int k;
    cin >> k;
    cout << sqrt(6 * Pi(k)) << "\n";
}