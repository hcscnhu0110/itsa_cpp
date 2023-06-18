#include <iostream>
using namespace std;

//平、閏年判定

int main(){
    int year;
    while(cin >> year){
        if(!(year % 4)){
            if(year % 100){
                cout << "Bissextile Year\n";                //可被4整除不能被100整除即閏年
            }
            else{
                if(year % 400){
                    cout << "Common Year\n";                //可被4、100整除，但不能被400整除即平年
                }
                else{
                    cout << "Bissextile Year\n";            //可被4、100、400整除即閏年
                }
            }
        }
        else{
            cout << "Common Year\n";                        //不可被4整除即平年
        }
    }
}