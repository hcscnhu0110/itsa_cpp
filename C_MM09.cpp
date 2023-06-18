#include <iostream>
using namespace std;

//計算 i 次方的值

int main(){
    int i;
    while(cin >> i){
        if(i > 31){
            cout << "Value of more than 31\n";
        }
        else{
            cout << (2 << (i - 1)) << "\n";
        }   
    }
}