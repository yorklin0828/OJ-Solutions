// c186. 蝸牛老師的點名單

#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    getline(cin, s);
    int len = s.size();
    for(int i = 0; i < len; i++){
        if(s[i] == ' ') cout << "\n";
        else cout << s[i];
    }
    return 0;
}
