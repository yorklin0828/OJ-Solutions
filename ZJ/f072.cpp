// 	f072. 3. 家裡的後花園 (Garden)

#include<cstdio>
#include<vector>
using namespace std;

int main(){
    int length;
    while(scanf("%d", &length) != EOF){
        vector<bool> garden(length + 1, false);
        vector<int> arr(length);
        vector<int> indexArr;

        // 用indexArr去紀錄柵欄的index
        for(int i = 0; i < length; i++){
            scanf("%d", &arr[i]);
            if(arr[i] == 1){
                indexArr.push_back(i);
            }
        }

        // 把柵欄中間的土地標為true
        int len = indexArr.size();
        for(int i = 0; i < len - 1; i++){
            for(int j = indexArr[i] + 1; j < indexArr[i + 1]; j++){
                garden[j] = true;
            }
        }

        // 把害蟲兩側的土地標為false
        for(int i = 1; i < length; i++){
            if(arr[i] == 9){
                for(int j = i - 1; j <= min(i + 1, length - 1); j++){
                    garden[j] = false;
                }
            }
        }

        int ans = 0;
        for(int i = 0; i <= length; i++){
            if(garden[i]){
                ans++;
            }
        }
        printf("%d\n", ans);
    }
    return 0;
}
