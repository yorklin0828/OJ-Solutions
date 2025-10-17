// p914. 完美數 (Perfect)

#include<bits/stdc++.h>

using namespace std;
using ll = long long;

int main(){
    ll n;
    scanf("%lld", &n);
    ll sum = 1, sq = sqrt(n);
    for(ll i = 2; i <= sq; i++){
        if(!(n % i)){
            sum += i;
            if(i != (n / i)) sum += (n / i);
        }
    }
    printf("%lld\n%s", sum, (sum == n ? "perfect" : "not perfect"));
    return 0;
}