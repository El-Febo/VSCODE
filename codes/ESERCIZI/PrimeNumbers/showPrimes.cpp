#include<iostream>
using namespace std;



int main(){
    int n;
    cin >> n;
    
    for(int i = 1; i < n; i++) {       
        bool prime = true;     
        for(int j = 2; j < i; j++)         
            if( i % j == 0){
                j = i;
                prime = false;
            }
        if(prime == true)
            cout << "| " << i << " |";                                      
    }        
    cout << "| " << n << " |";      
    
}
    