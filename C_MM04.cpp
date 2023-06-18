#include <iostream>
using namespace std;

//計算總和、乘積、差、商和餘數

int main(){
    int x, y;
    while(cin >> x >> y){
        cout << x << "+" << y << "="<< x + y << "\n";
        cout << x << "*" << y << "="<< x * y << "\n";
        cout << x << "-" << y << "="<< x - y << "\n";
        if(x < 0 && (x % y)){
            cout << x << "/" << y << "="<< x / y -1 << "..." << x % y + y <<"\n";   //餘數要>=0
        }
        else{
            cout << x << "/" << y << "="<< x / y << "..." << x % y <<"\n";
        }   
    }
}