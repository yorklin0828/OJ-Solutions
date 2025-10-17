// c562. Puyu 愛數論

#include<iostream>

using namespace std;
using ll = long long;

int main(){
    string s;
    while(cin >> s){
        ll ans{};
        ll len = s.size();
        for(ll i = 0; i < len; i++){
            ans += (s[i] == '8' ? 2 : (s[i] == '0' || s[i] == '6' || s[i] == '9' ? 1 : 0));
        }
        cout << ans << "\n";
    }
    return 0;
}
