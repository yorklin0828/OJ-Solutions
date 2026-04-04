// a044. 空間切割

#include<cstdio>

using namespace std;
using ll = long long;

int main(){
    ll n;
    while(scanf("%lld", &n) != EOF){
        ll ans = ((n * n * n) + 5 * n + 6) / 6;
        printf("%lld\n", ans);
    }
    return 0;
}