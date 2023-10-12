#include<iostream>
using namespace std;

void oft( unsigned int &s,unsigned int &m, unsigned int &h){
    if(s > 59){
        m += s / 60;
        s %= 60;
    }
    if(m > 59){
        h += m / 60;
        m %= 60;
    }
}


int main(){
    unsigned int s, m, h;
    cin >> h >> m >> s;
    oft(s, m, h);

    cout << h << " " << m << " " << s << endl;

}