#include <iostream>
#include <iomanip>
using namespace std;

//攝氏溫度轉華式溫度

int main(){
    double c;
    while(cin >> c){
        cout << fixed << setprecision(1) << c * 9 / 5 + 32 << "\n";
    }
}