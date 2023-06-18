#include <iostream>
using namespace std;

//季節判定

int main(){
    int month;
    while(cin >> month){
        if(month == 3 || month == 4 ||month == 5){
            cout << "Spring\n";
        }
        else if(month == 6 || month == 7 ||month == 8){
            cout << "Summer\n";
        }
        else if(month == 9 || month == 10 ||month == 11){
            cout << "Autumn\n";
        }
        else if(month == 12 || month == 1 ||month == 2){
            cout << "Winter\n";
        }
    }
}