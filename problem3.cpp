#include <iostream>
using namespace std;

//判斷座標是否在圓形的範圍內

int main(){
    int x, y;
    while(cin >> x >> y){
        if(x * x + y * y > 10000){
            cout << "outside\n";
        }
        else{
            cout << "inside\n";
        }
    }
}