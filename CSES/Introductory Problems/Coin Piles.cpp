#include <cstdio>
#include<algorithm>

using namespace std;
using ll = long long;

int main(){
    ll n;
    scanf("%lld", &n);

    while(n--){
        ll x, y;
        scanf("%lld%lld", &x, &y);

        if(x + y == 0){
            printf("YES\n");
        }else if((x + y) % 3 == 0 && max(x, y) <= (min(x, y) * 2)){
            printf("YES\n");
        }else{
            printf("NO\n");
        }
    }
    return 0;
}
