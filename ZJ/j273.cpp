// j273. 進德教育

#include<cstdio>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    int n;
    scanf("%d", &n);
    vector<pair<int, int>> arr(n - 1);
    int index = 0;

    while(n--){
        int k;
        scanf("%d", &k);
        int len = arr.size();
        bool isFind = false;
        for(int i = 0; i < len; i++){
            if(k == arr[i].first){
                arr[i].second++;
                isFind = true;
            }
        }
        if(!isFind){
            arr[index] = {k, 1};
            index++;
        }
    }
    sort(arr.begin(), arr.end());

    int len = arr.size();
    for(int i = 0; i < len; i++){
            if(arr[i].first == 0){
                continue;
            }
        printf("%d %d\n", arr[i].first, arr[i].second);
    }
    return 0;
}
