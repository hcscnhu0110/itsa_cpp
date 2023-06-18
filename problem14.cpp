#include <iostream>
#include <string>
using namespace std;

//判斷是否為迴文

int main(){
    string input;
    while(cin >> input){
        int start = 0;
        int end = input.length() - 1;
        int flag = 1;
        while(start < end){
            if(input[start] != input[end]){
                flag = 0;
                break;
            }
            start++;
            end--;
        }
        if(flag){
            cout << "YES\n";
        }
        else{
            cout << "NO\n";
        }
    }
}