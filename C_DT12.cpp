#include <iostream>
#include <string>
using namespace std;

//解讀神秘的密碼

int main(){
    string input;
    cin >> input;
    int len = input.length();
    for(int i = len - 1; i >= 0; i--){
        cout << input[i];
    }
    cout << "\n";
}