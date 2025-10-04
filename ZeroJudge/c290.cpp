// c290. APCS 2017-0304-1秘密差

#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    string s;
    cin >> s;
    int len = s.size(), oddSum = 0, evenSum = 0;
    for(int i = 0; i < len; i++){
        if(i & 1) oddSum += s[i] - '0';
        else evenSum += s[i] - '0';
    }
    if(oddSum - evenSum > 0) cout << oddSum - evenSum << "\n";
    else cout << (oddSum - evenSum) * -1 << "\n";
}
