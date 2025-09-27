// j605. 1. 程式考試

#include<cstdio>

int main(){
    int n, maxScore = -1, maxTime = 0, error = 0;
    scanf("%d", &n);
    int temp = n;
    while(temp--){
        int time, score;
        scanf("%d%d", &time, &score);
        if(score > maxScore){
            maxScore = score;
            maxTime = time;
        }else if(score == -1){
            error++;
        }
    }
    int ans = maxScore - n - error * 2;
    printf("%d %d\n", (ans < 0 ? 0 : ans), maxTime);
    return 0;
}
