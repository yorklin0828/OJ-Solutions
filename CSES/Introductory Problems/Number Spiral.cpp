#include <cstdio>
#include <algorithm>

using namespace std;
using ll = long long;

void solution(ll x, ll y){
    ll m = max(x, y);
    if(m & 1){
        if(y == m){
            printf("%lld\n", m * m - x + 1);
        }else{
            printf("%lld\n",(m - 1) * (m - 1) + y);
        }
    }else{
        if(x == m){
            printf("%lld\n", m * m - y + 1);
        }else{
            printf("%lld\n", (m - 1) * (m - 1) + x);
        }
    }
}

int main(){
    ll n;
    scanf("%lld", &n);
    while(n--){
        ll x, y;
        scanf("%lld %lld", &x, &y);
        solution(x, y);
    }
    return 0;
}
