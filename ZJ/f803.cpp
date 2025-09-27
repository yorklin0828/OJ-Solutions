// f803. 質數篩法練習

#include<cstdio>
#include<cmath>
#include<vector>
using namespace std;

int main(){
    int n;
    scanf("%d", &n);
    vector<bool> arr(n + 1, true);
    arr[0] = false;
    arr[1] = false;
    int sq = sqrt(n);
    for(int i = 2; i <= sq; i += (i == 2 ? 1 : 2)){
        if(arr[i]){
            for(int j = i * i; j <= n; j += i){
                arr[j] = false;
            }
        }
    }
    vector<int> prefix(n + 1, 0);
    for(int i = 1; i <= n; i++){
        prefix[i] += prefix[i - 1] + arr[i];
    }

    int m, num;
    scanf("%d", &m);
    while(m--){
        scanf("%d", &num);
        printf("%d\n", prefix[num]);
    }
    return 0;
}
