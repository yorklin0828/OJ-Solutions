// a022. 迴文

#include<iostream>
using namespace std;

int main(){
    string str;
    bool ans = true;
    cin >> str;
    int length = str.size();
    for (int i = 0; i < length / 2; i++){
        if (str[i] != str[length - 1 - i]){
            ans = false;
            break;
        }
    }
    if (ans)
        cout << "yes" << endl;
    else
        cout << "no" << endl;   
    return 0;
}
