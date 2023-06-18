#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

//計算正方形面積

int main(){
    double input;
    while(cin >> input){
        cout << fixed << setprecision(1) << floor(input * input * 10 + 0.5) / 10 << "\n";       
        //以防浮點數四捨五入錯誤，取小數點後1位所以x10
    }
}