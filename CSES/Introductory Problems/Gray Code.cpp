#include <cstdio>

using namespace std;
using ll = long long;

int main(){
    int n;
    scanf("%d", &n);

    ll m = 1LL << n;
    for(int i = 0; i < m; i++){
        ll gray = i ^ (i >> 1);
        for(int j = n - 1; j >= 0; j--){
            printf("%d", (gray >> j) & 1);
        }
        printf("\n");
    }
    return 0;
}
