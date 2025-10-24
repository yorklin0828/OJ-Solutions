#include <cstdio>

using namespace std;
using ll = long long;

int main(){
    ll n;
    scanf("%lld", &n);
    for(ll i = 1; i <= n; i++){
        ll total = i * i;
        total = total * (total - 1) / 2;
        
        ll attack = (i - 1) * (i - 2);
        printf("%lld\n", total - 4 * attack);
    }
    return 0;
}
