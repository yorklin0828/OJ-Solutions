// e948. 基礎代謝率 (BMR Calculation)

#include<cstdio>

using namespace std;

int main(){
    int n;
    scanf("%d", &n);

    while(n--){
        int a, b, c, d;
        scanf("%d%d%d%d", &a, &b, &c, &d);

        double ans{};
        if(a){
            ans = (13.7 * d) + (5 * c) - (6.8 * b) + 66;
        }else{
            ans = (9.6 * d) + (1.8 * c) - (4.7 * b) + 655;
        }
        printf("%.2f\n", ans);
    }
    return 0;
}