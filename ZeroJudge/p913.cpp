// p913. 冪 (Power)

#include<bits/stdc++.h>

using namespace std;
using ll = long long;

int main(){
    ll n, m;
    scanf("%lld%lld", &n, &m);

    for(ll i = n; i <= m; i *= n){
        if(i <= m) printf("%lld\n", i);
    }
    return 0;
}