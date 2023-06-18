#include <iostream>
#include <iomanip>
#include <string>
#include <sstream>
using namespace std;

//一整數序列所含之整數個數及平均值

int main(){
    string input;
    while(getline(cin, input)){
        double sum = 0;
        int size = 0;
        
        stringstream ss(input);
        string value;
        
        while(getline(ss, value, ' ')){
            sum += stoi(value);
            size++;
        }
        
        double ave = sum / size;
        cout << "Size: " << size << "\n";
        cout << "Average: " << fixed << setprecision(3) << ave << "\n";
    }
}