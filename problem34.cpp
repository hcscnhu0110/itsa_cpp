#include <iostream>
#include <iomanip>
using namespace std;

//標準體重計算

int main(){
    int height, sex;
    while(cin >> height >> sex){
        double weight;
        if(sex == 1){
            weight = (height - 80) * 0.7;
        }
        else{
            weight = (height - 70) * 0.6;
        }
        cout << fixed << setprecision(1) << weight << "\n";
    }
}