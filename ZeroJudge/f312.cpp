// f312. 1. 人力分配

#include<bits/stdc++.h>

int main(){
    int a1, b1, c1, a2, b2, c2, n;
    scanf("%d%d%d%d%d%d%d", &a1, &b1, &c1, &a2, &b2, &c2, &n);
    
    int ans = -100000000;
    for(int i = 0; i <= n; i++){
        int x1 = a1 * i * i + b1 * i + c1;
        int x2 = a2 * (n - i) * (n - i) + b2 * (n - i) + c2;
        ans = std::max(ans, x1 + x2);
    }
    printf("%d", ans);
    return 0;
}
