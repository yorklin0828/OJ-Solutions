// a038. 數字翻轉

#include<iostream>
using namespace std;

int main(){
    string str;
    cin >> str;
    int length = str.size();
    bool first = true, output = false;
    for (int i = length - 1; i >= 0; i--){
        if (str[i] - '0' != 0 && first == true){
            first = false;
            cout << str[i] - '0';
            output = true;
        }else if (!first){
            output = true;
            cout << str[i] - '0';
        }
    }
    if (!output)
        cout << 0 << endl;
    return 0;
}
