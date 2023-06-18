#include <iostream>
#include <iomanip>
using namespace std;

// 英哩轉公里

int main(){
    int mile;
    double km;
    while(cin >> mile){
        km = mile * 1.6;
        cout << fixed << setprecision(1) << km << "\n";
    }
}