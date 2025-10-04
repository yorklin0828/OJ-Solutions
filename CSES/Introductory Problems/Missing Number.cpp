#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main(){
    ll n;
    scanf("%lld", &n);
    vector<bool> arr(n + 1, false);
    for(int i = 0; i < n - 1; i++){
        ll m;
        scanf("%lld", &m);
        arr[m] =true;
    }
    for(ll i = 1; i < n + 1; i++){
        if(!arr[i]){
            printf("%lld", i);
            break;
        }
    }
    return 0;
}
