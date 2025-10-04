// a740. 质因数之和

#include<cstdio>
#include<cmath>

int main(){
    int n;
    while(scanf("%d", &n) == 1){
        int ans = 0;
        int sq = sqrt(n);
        for(int i = 2; i <= sq ;i++){
            while(n % i == 0){
                n /= i;
                ans += i;
            }
        }
        if(n > 1){
            ans += n;
        }
        printf("%d\n", ans);
    }
    return 0;
}
