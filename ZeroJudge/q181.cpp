// q181. 1. 等紅綠燈 

#include<bits/stdc++.h>
using namespace std;

int main(){
    int g, r, n;
    scanf("%d%d%d", &g, &r, &n);
    
    int ans = 0, sum = r + g;
    while(n--){
        int a;
        scanf("%d", &a);
        
        a %= sum;
        if(a >= g) ans += r - (a - g);
    }
    printf("%d", ans);
    return 0;
}
