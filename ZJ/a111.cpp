// a111. 12149 - Feynman

#include<bits/stdc++.h>

int main(){
    int n;
    while(scanf("%d", &n) != EOF){
        if(n == 0) continue;
        printf("%d\n", n * (n + 1) * (2 * n + 1) / 6);
    }
    return 0;
}
