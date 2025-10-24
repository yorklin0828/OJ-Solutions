#include <cstdio>
#include <vector>

using namespace std;
using ll = long long;

int main(){
    ll n;
    scanf("%lld", &n);

    ll sum = n * (n + 1) / 2;
    ll target = sum / 2;

    if(sum & 1){
        printf("NO\n");
        return 0;
    }

    vector<int> a, b;
    for(ll i = n; i > 0; i--){
        if(i <= target){
            target -= i;
            a.push_back(i);
        }else{
            b.push_back(i);
        }
    }
    int lenA = a.size();
    int lenB = b.size();

    if(target){
        printf("NO\n");
    }else{
        printf("YES\n");

        printf("%d\n", lenA);
        for(int i = 0; i < lenA; i++){
            printf("%d ", a[i]);
        }
        printf("\n");

        printf("%d\n", lenB);
        for(int i = 0; i < lenB; i++){
            printf("%d ", b[i]);
        }
        printf("\n");
    }

    return 0;
}

