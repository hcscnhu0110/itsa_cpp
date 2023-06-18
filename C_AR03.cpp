#include <iostream>
using namespace std;

//計算陣列中所有元素的立方和

int main(){
    int input;
    int sum = 0;
    for(int i = 0; i < 6; i++){
        cin >> input;
        sum += input * input * input;
    }
    cout << sum << "\n";
}