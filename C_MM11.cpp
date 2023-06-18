#include <iostream>
#include <iomanip>
using namespace std;

//購票計算

int main(){
    int n;
    while(cin >> n){
        int money[3] = {10, 5, 1};                              //換成10、5、1塊
        for(int i = 0; i < 3; i++){
            cout << "NT" << money[i] << "=" << n / money[i] << "\n";
            n %= money[i];
        }
    }
}