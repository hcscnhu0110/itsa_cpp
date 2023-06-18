#include <iostream>
#include <cstring>
using namespace std;

//文字及字母出現次數

int main(){
    char input[110];
    while(cin.getline(input, 110)){
        int ans[30] = {0};
        int count = 0;
        const char *delim = " ,.";
        char *voc;
        voc = strtok(input, delim);

        while(voc){
            count++;
            int len = strlen(voc);
            for(int i = 0; i < len; i++){
                if(voc[i] >= 'a'){
                    ans[voc[i] - 'a'] += 1;
                }
                else{
                    ans[voc[i] - 'A'] += 1;
                }
            }
            voc = strtok(NULL, delim);
        }
        
        cout << count << "\n";
        for(int i = 0; i < 26; i++){
            if(ans[i]){
                char c = i + 97;
                cout << c << " : " << ans[i] << "\n";
            }
        }
    }
}