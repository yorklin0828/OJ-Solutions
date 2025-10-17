// c002. 10696 - f91

#include<bits/stdc++.h>
using namespace std;

int f91(int n){
    if(n >= 101) return n - 10;
    else if(n <= 100) return f91(f91(n + 11));
}

int main(){
    int n;
    while(scanf("%d", &n) != EOF){
        if(n == 0) break;
        printf("f91(%d) = %d\n", n, f91(n));
    }
    return 0;
}
