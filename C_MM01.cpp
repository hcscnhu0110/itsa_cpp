#include <iostream>
#include <iomanip>
using namespace std;

//計算梯形面積

int main(){
    double x, y, h;
    while(cin >> x >> y >> h){
        cout << "Trapezoid area:" << fixed << setprecision(1) << (x + y) * h / 2 << "\n";
    }
}