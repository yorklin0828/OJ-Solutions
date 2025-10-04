// 	f819. 圖書館 (Library) 

#include<cstdio>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    int n;
    scanf("%d", &n);
    
    vector<pair<int, int>> arr(n);
    vector<int> ans;
    int sum = 0;
    for(int i = 0; i < n; i++){
        scanf("%d", &arr[i].first);
        scanf("%d", &arr[i].second);
        if(arr[i].second > 100){
            ans.push_back(arr[i].first);
            sum += arr[i].second - 100;
        }
    }
    sum *= 5;
    
    sort(ans.begin(), ans.end());
    int len = ans.size();
    for(int i = 0; i < len; i++){
        printf("%d ", ans[i]);
    }
    printf("\n%d", sum);
    return 0;
}
