#include <iostream>
using namespace std;

//檢查數值是否有重複

int main(){
    int n;
    while(cin >> n){
        int input[1000];
        int flag = 1;
        for(int i = 0; i < n; i++){
            cin >> input[i];
            for(int j = 0; j < i; j++){
                if(input[i] == input[j]){
                    flag = 0;
                    break;
                }
            }
        }
        if(flag){
            cout << "1\n";
        }
        else{
            cout << "0\n";
        }
    }
}