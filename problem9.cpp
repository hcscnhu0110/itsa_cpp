#include <iostream>
using namespace std;

//計算正整數被3整除之數值之總和

int main(){
    int n;
    while(cin >> n){
        int sum = 0;
        for(int i = 1; i <= n; i++){
            if(!(i % 3)){
                sum += i;
            }
        }
        cout << sum << "\n";
    }
}