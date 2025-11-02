// h084. 4. 牆上海報

#include <cstdio>
#include <vector>
#include <algorithm>

using namespace std;
vector<int> fence;
vector<int> poster;

bool verify(int high){
    int cnt{};  // number of continuous fence
    int idx{};  // number of poster
    int len = fence.size(), l = poster.size();
    for(int i{}; i < len; i++){
        if(idx == l) return true;

        if(fence[i] >= high){
            cnt++;
            if(cnt == poster[idx]){
                cnt = 0;
                idx++;
            }
        }else{
            cnt = 0;
        }
    }
    return idx == l;
}

int main(){
    int n, k;
    scanf("%d%d", &n, &k);

    int Min = 1e9, Max = -1e9;
    for(int i{}; i < n; i++){
        int tmp;
        scanf("%d", &tmp);
        Min = min(Min, tmp);
        Max = max(Max, tmp);
        fence.emplace_back(tmp);
    }
    for(int i{}; i < k; i++){
        int tmp;
        scanf("%d", &tmp);
        poster.emplace_back(tmp);
    }

    // binary search
    int l = Min, r = Max, mid{};
    while(l <= r){
        mid = (l + r) / 2;
        if(verify(mid)){
            l = mid + 1;
        }else{
            r = mid - 1;
        }
    }
    printf("%d\n", r);
    return 0;
}