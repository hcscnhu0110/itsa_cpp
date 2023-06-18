#include <iostream>
#include <string>
#include <sstream>
using namespace std;

//一維陣列反轉 I

int main(){
    string input;
    while(getline(cin, input)){
        int num[110] = {0};
        stringstream ss(input);
        string token;
        int count = 0;
        while(getline(ss, token, ' ')){
            num[count++] = stoi(token);
        }
        
        cout << num[count - 1];
        for(int i = count - 2; i >= 0; i--){
            cout << " " << num[i];                         //最後不能空白
        }
        cout << "\n";
    }
    return 0;
}