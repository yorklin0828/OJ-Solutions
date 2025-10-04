// f063. The Strongest Chain

#include<cstdio>
#include<vector>
using namespace std;

int main(){
    int n;
    scanf("%d", &n);
    vector<int> minArr(n);

    while(n--){
        int i, min = 0;
        scanf("%d", &i);
        while(i--){
            int k;
            scanf("%d", &k);
            if(min == 0){
                min = k;
            }else if(min > k){
                min = k;
            }
        }
        minArr[n] = min;
    }
    int max = 0;
    for(int i = 0; i < minArr.size(); i++){
        if(max == 0){
            max = minArr[i];
        }else if(max < minArr[i]){
            max = minArr[i];
        }
    }
    printf("%d\n", max);
    return 0;
}
