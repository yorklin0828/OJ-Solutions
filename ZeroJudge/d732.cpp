// d732. 二分搜尋法

#include <cstdio>
#include <vector>

using namespace std;

int main(){
    int n, k;
    scanf("%d%d", &n, &k);
    vector<int> v(n, 0);
    for(int i{}; i < n; i++){
        scanf("%d", &v[i]);
    }

    while(k--){
        int target;
        scanf("%d", &target);
        int l = 0, r = n - 1;
        bool find = false;
        while(l <= r){
            int mid = (l + r) / 2;
            if(v[mid] == target){
                printf("%d\n", mid + 1);
                find = true;
                break;
            }
            else if(v[mid] < target){
                l = mid + 1;
            }else if(v[mid] > target){
                r = mid - 1;
            }
        }
        if(!find){
            printf("%d\n", 0);
        }
    }
    return 0;
}
