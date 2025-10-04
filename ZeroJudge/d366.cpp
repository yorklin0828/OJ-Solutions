// d366. 00294 - Divisors 

#include<cstdio>
#include<cmath>

int main(){
    int n;
    scanf("%d", &n);
    while(n--){
        int a, b, ans = 0, max = 0;
        scanf("%d%d", &a, &b);

        for(int i = a; i <= b; i++){
            int divisors = 0, sq = sqrt(i);
            for(int j = 1; j <= sq; j++){
                if(i % j == 0){
                    divisors++;

                    int other = i / j;
                    if(other != j){
                        divisors++;
                    }
                }
            }
            if(max < divisors){
                ans = i;
                max = divisors;
            }
        }
        printf("Between %d and %d, %d has a maximum of %d divisors.\n", a, b, ans, max);
    }
    return 0;
}
