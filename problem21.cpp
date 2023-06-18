#include <iostream>
#include <iomanip>
using namespace std;

//最大值與最小值

int main(){
    double input[15];
    double max = 0;
    double min = 1000000;
    for(int i = 0; i < 10; i++){
        cin >> input[i];
        if(input[i] > max){
            max = input[i];
        }
        if(input[i] < min){
            min = input[i];
        }
    }
    cout << "maximum:" << fixed << setprecision(2) << max << "\n";
    cout << "minimum:" << fixed << setprecision(2) << min << "\n";
}