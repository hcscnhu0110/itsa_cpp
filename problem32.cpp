#include <iostream>
#include <string>
using namespace std;

//字母往後移

int main(){
    string input;
    getline(cin, input);
    int n;
    cin >> n;
    int len = input.length();
    for(int i = 0; i < len; i++){
        if(input[i] >= 'a' && input[i] <= 'z'){
            input[i] = (input[i] - 'a' + n) % 26 + 'a';
        }
        else if(input[i] >= 'A' && input[i] <= 'Z'){
            input[i] = (input[i] - 'A' + n) % 26 + 'A';
        }
        else if(input[i] >= '0' && input[i] <= '9'){
            input[i] = (input[i] - '0' + n) % 10 + '0';
        }
        cout << input[i];
    }
    cout << "\n";
}