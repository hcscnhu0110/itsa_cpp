#include <iostream>
using namespace std;

//輾轉相除法

int gcd(int a, int b){
    return b == 0 ? a : gcd(b, a % b);
}

int main(){
    int a, b;
    while(cin >> a >> b){
        cout << gcd(a, b) << "\n";
    }
}