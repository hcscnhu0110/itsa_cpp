#include <iostream>
using namespace std;

//十進制轉二進制

int main(){
    int input;
    cin >> input;
    int bin[10] = {0};
    if(input < 0){                      //負數的話要先加256推移至正整數再運算
        input += 256;
    }
    int count = 0;
    while(input >= 2){
        bin[count++] = input % 2;
        input /= 2;
    }
    bin[count] = input;
    for(int i = 7; i >= 0; i--){
        cout << bin[i];
    }
    cout << "\n";
}