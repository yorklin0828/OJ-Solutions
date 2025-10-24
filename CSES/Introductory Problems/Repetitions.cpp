#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main(){
    string s;
    cin >> s;
    int len = s.size(), temp = 1, maxlen = 0;
    for(int i = 1; i < len; i++){
        if(s[i] == s[i - 1]){
            temp++;
        }else{
            maxlen = max(maxlen, temp);
            temp = 1;
        }
    }
    cout << max(maxlen, temp) << "\n";

    return 0;
}
