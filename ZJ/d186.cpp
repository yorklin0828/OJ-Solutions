// d186. 11461 - Square Numbers

#include<cstdio>
#include<cmath>

int main(){
    int n, m;
    while(scanf("%d%d", &n, &m) != EOF && n + m != 0){
        int sqN = sqrt(n);
        int sqM = sqrt(m);
        int ans = 0;
        for(int i = sqN; i <= sqM; i++){
            if(i * i >= n){
                ans++;
            }
        }
        printf("%d\n", ans);
    }
    return 0;
}
