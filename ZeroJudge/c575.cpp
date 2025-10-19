// c575. APCS 2017-0304-4基地台

#include<bits/stdc++.h>

using namespace std;
using ll = long long;

ll n, k;
vector<ll> p;

bool verify(ll length){
    ll count = 1, right = p[0] + length;
    for(ll i = 1; i < n; i++){
        if(p[i] <= right) continue;
        else{
            right = p[i] + length;
            count++;
        }
    }
    return count <= k;
}

int main(){
    scanf("%lld%lld", &n, &k);
    for(ll i{}; i < n; i++){
        ll tmp;
        scanf("%lld", &tmp);
        p.emplace_back(tmp);
    }
    sort(p.begin(), p.end());

    ll left = 0, right = 1e9;
    while(left < right){
        ll middle = (left + right) / 2;
        if(verify(middle)) right = middle;
        else left = ++middle;
    }
    printf("%lld", left);
    return 0;
}