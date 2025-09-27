// p911. 橋牌 (Bridge) 

#include<bits/stdc++.h>
using namespace std;

int main(){
    int a[4] = {0}; // S H D C
    int ans = 0;
    for(int i = 0; i < 13; i++){
        char c;
        cin >> c;
        string n;
        cin >> n;
        if(n[0] == 'J') ans += 1;
        else if(n[0] == 'Q') ans += 2;
        else if(n[0] == 'K') ans += 3;
        else if(n[0] == 'A') ans += 4;

        if(c == 'S') a[0]++;
        else if(c == 'H') a[1]++;
        else if(c == 'D') a[2]++;
        else if(c == 'C') a[3]++;
    }
    for(int i = 0; i < 4; i++){
        cout << a[i] << " ";
    }
    cout << "\n" << ans;
    return 0;
}
