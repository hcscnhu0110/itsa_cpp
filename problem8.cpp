#include <iostream>
using namespace std;

//質數判別

int main(){
    int input;
    while(cin >> input){
        int flag = 0;
        for(int i = 2; i * i <= input; i++){
            if(!(input % i)){                       //整除表示不是質數
                flag = 1;
                break;
            }
        }
        if(flag){
            cout << "NO\n";
        }
        else{
            cout << "YES\n";
        }
    }
}