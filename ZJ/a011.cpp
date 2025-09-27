// a011. 00494 - Kindergarten Counting Game

#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    while(getline(cin, s)){
        int len = s.size(), ans = 0;
        bool word = true;
        
        for(int i = 0; i < len; i++){
            if(isalpha(s[i])){
                if(!word) word = true; 
                continue;
            }else{
                if(word) ans++;
                word = false;
            }
        }
        if(isalpha(s[--len])) ans++;
        cout << ans << "\n";
    }
    return 0;
}
