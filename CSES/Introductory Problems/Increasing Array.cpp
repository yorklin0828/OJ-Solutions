#include <cstdio>

using namespace std;
using ll = long long;

int main(){
    ll n, last = 0, ans = 0;
    scanf("%lld", &n);
    for(ll i = 0; i < n; i++){
        ll m;
        scanf("%lld", &m);
        if(last && last > m){
            ans += last - m;
            m = last;
        }
        last = m;
    }
    printf("%lld", ans);
    
    return 0;
}
