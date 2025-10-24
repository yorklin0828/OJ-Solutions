// e289. 美麗的彩帶

#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;
using ll = long long;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    ll m, n;
    cin >> m >> n;

    vector<string> v(n);
    unordered_map<string, ll> um;
    for(ll i = 0; i < n; i++){
        cin >> v[i];
        if(i < m){
            um[v[i]]++;
        }
    }
    ll ans{};
    if(um.size() == m) ans++;

    for(ll i = m; i < n; i++){
        um[v[i - m]]--;
        if(!um[v[i - m]]){
            um.erase(v[i - m]);
        }
        um[v[i]]++;
        if(um.size() == m) ans++;
    }
    cout << ans << "\n";
    return 0;
}
