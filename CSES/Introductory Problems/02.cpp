#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main(){
    ll m, n;
    scanf("%lld%lld", &m, &n);
    ll temp = m;
    printf("%lld\n", m);
    while(m < n){
        m *= temp;
        if(m <= n) printf("%d\n", m);
    }
    return 0;
}
