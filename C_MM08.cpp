#include <iostream>
using namespace std;

//計算兩數和的平方值

int main(){
    int x, y;
    while(cin >> x >> y){
        cout << (x + y) * (x + y) << "\n";
    }
}