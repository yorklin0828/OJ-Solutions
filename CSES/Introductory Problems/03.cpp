#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main(){
    ll n;
    ll m = 1;
    scanf("%lld", &n);
    ll sq = sqrt(n);
    for(int i = 2; i <= sq; i++){
        if(n % i == 0){
            m += i;
            if(i != n / i){
                m += n / i;
            }
        }
    }
    printf("%lld\n", m);
    printf("%s", m == n ? "perfect" : "not perfect");
    return 0;
}

