// 	g256. 考拉茲猜想

#include<cstdio>

int main(){
    long long int n;
    while(scanf("%lld", &n) != EOF){
        long long int count = 0;
        while(n != 1){
            if(n % 2 == 0){
                n /= 2;
                count++;
            }else{
                n = n * 3 + 1;
                count++;
            }
        }
        printf("%lld\n", count);
    }
    return 0;
}
