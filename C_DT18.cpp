#include <iostream>
#include <string>
#include <sstream>
#include <stack>
using namespace std;

//後序運算式求值

int main(){
    string input;
    getline(cin, input);
    stringstream ss(input);
    string token;
    stack<int> value;
    while(getline(ss, token, ' ')){
        if(isdigit(token[0])){
            int tmp = stoi(token);
            value.push(tmp);
        }
        else{
            int second = value.top();
            value.pop();
            int first = value.top();
            value.pop();
            int ans = 0;
            switch(token[0]){
                case '+':
                    ans = first + second;
                    break;
                case '-':
                    ans = first - second;
                    break;
                case '*':
                    ans = first * second;
                    break;
                case '/':
                    ans = first / second;
                    break;
                case '%':
                    ans = first % second;
                    break;
            }
            value.push(ans);
        }
    }
    cout << value.top() << "\n";
}