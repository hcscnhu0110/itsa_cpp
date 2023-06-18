#include <iostream>
#include <iomanip>
using namespace std;

//成績統計

int main(){
    int n;
    cin >> n;
    float lang, eng, math;
    float sum_all = 0, sum_lang = 0, sum_eng = 0, sum_math = 0;
    for(int i = 0; i < n; i++){
        cin >> lang >> eng >> math;
        sum_lang += lang;
        sum_eng += eng;
        sum_math += math;
    }
    sum_all += sum_lang + sum_eng + sum_math;
    cout << fixed << setprecision(1) << sum_all / (n * 3) << " " << sum_lang / n << " " <<  sum_eng / n << " " << sum_math / n << "\n";
}