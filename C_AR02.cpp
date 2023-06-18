#include <iostream>
using namespace std;

//一維陣列反轉 II

int main(){
    int a[10];
    for(int i = 0; i < 6; i++){
        cin >> a[i];
    }
    
    cout << a[5];
    for(int i = 4; i >= 0; i--){
        cout << " " << a[i];
    }
    cout << "\n";
    return 0;
}