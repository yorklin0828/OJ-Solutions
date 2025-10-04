// c295. APCS-2016-1029-2最大和

#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main(){
    ll n, m;
    while(scanf("%lld%lld", &n, &m) != EOF){
        ll sum = 0;
        vector<ll> arr;
        while(n--){
            ll Max = 0;
            for(ll i = 0; i < m; i++){
                ll k;
                scanf("%lld", &k);
                Max = (ll)max(Max, k);
            }
            arr.emplace_back(Max);
            sum += Max;
        }
        printf("%lld\n", sum);
        
        ll len = arr.size();
        bool first = true;
        for(ll i = 0; i < len; i++){
            if(!(sum % arr[i])){
                if(!first) printf(" ");
                printf("%lld", arr[i]);
                first = false;
            }
        }
        if(first) printf("-1");
    }
    return 0;
}
