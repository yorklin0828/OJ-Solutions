#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main(){
    ll n;
    scanf("%lld", &n);

    ll ans = 0;
    for(int i = 5; i <= n; i *= 5){
        ans += n / i;
    }
    printf("%lld", ans);
    return 0;
}
