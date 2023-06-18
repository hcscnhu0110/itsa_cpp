#include <iostream>
using namespace std;

//矩陣反轉

int main(){
    int n, m;
    while(cin >> n >> m){
        int matrix[n][m];
        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++){
                cin >> matrix[i][j];
            }
        }
        for(int i = 0; i < m; i++){
            for(int j = 0; j < n; j++){
                cout << matrix[j][i];
                if(j != n - 1){
                    cout << " ";
                }
            }
            cout << "\n";
        }
    }
}