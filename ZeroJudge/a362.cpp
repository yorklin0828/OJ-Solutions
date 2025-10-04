// a362. 1. 搬雕像

#include<cstdio>
#include<vector>
#include<algorithm>
#include<cmath>
using namespace std;

struct Node{int h, w, index;};

int main(){
    int n;
    while(scanf("%d", &n) != EOF){
        vector<Node> arr(n);
        for(int i = 0; i < n; i++){
            scanf("%d%d", &arr[i].h, &arr[i].w);
            arr[i].index = i;
        }
        
        stable_sort(arr.begin(), arr.end(), [](const Node& x, const Node& y){
            if(x.h != y.h) return x.h < y.h;
            if(x.w != y.w) return x.w < y.w;
            return false;
        });
        
        int ans = 0;
        for(int i = 0; i < n; i++){
            ans += abs(arr[i].index - i);
        }
        printf("%d\n", ans);
    }
    return 0;
}
