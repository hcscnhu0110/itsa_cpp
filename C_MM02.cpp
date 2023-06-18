#include <iostream>
#include <iomanip>
using namespace std;

//計算三角形面積

int main(){
    double x, y;
    while(cin >> x >> y){
        cout << fixed << setprecision(1) << x * y / 2 << "\n";
    }
}