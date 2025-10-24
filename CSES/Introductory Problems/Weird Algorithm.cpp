#include <cstdio>

using namespace std;
using ll = long long;

int main(){
    ll num;
    scanf("%lld", &num);
    while(num != 1){
        printf("%lld ", num);
        if(num % 2){
            num *= 3;
            num++;
        }else{
            num /= 2;
        }
    }
    printf("%lld\n", num);

    return 0;
}
