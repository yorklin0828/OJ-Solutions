#include<bits/stdc++.h>
using namespace std;

#define ll long long
const ll MOD = 1e9 + 7;

int main(){
    ll n;
    scanf("%lld", &n);

    ll ans = 1;
    ll base = 2;
    while(n){
        if(n & 1) ans = (ans *= base) % MOD;
        base = (base * base) % MOD;
        n >>= 1;
    }
    printf("%lld", ans);
    return 0;
}
