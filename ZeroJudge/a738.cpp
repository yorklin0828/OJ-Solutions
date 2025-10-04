// a738. 最大公约数

#include<cstdio>

int main(){
    int m, n;
    while(scanf("%d %d", &m, &n) == 2){
        if(n > m){
            int temp = n;
            n = m;
            m = temp;
        }
        while(m % n != 0){
            m %= n;
            int temp = m;
            m = n;
            n = temp;
        }
        printf("%d\n", n);
    }
    return 0;
}