// g004. 社區熱門度 (Popularity)

#include<cstdio>
#include<vector>
using namespace std;

int main(){
    int r, c;
    scanf("%d%d", &r, &c);
    vector<vector<int>> arr(r, vector<int> (c));
    for(int i = 0; i < r; i++){
        for(int j = 0; j < c; j++){
            scanf("%d", &arr[i][j]);
        }
    }
    vector<vector<int>> ans = arr;
    for(int i = 0; i < r; i++){
        for(int j = 0; j < c; j++){
            int count = 0;
            if(arr[i][j] == 0){
                if(i + 1 < r && arr[i + 1][j] > 0){
                    ans[i][j] += arr[i + 1][j];
                    count++;
                }
                if(i - 1 >= 0 && arr[i - 1][j] > 0){
                    ans[i][j] += arr[i - 1][j];
                    count++;
                }
                if(j + 1 < c && arr[i][j + 1] > 0){
                    ans[i][j] += arr[i][j + 1];
                    count++;
                }
                if(j - 1 >= 0 && arr[i][j - 1] > 0){
                    ans[i][j] += arr[i][j - 1];
                    count++;
                }
                if(count > 0){
                    ans[i][j] /= count;
                }
            }
        }
    }

    for(int i = 0; i < r; i++){
        for(int j = 0; j < c; j++){
            printf("%d ", ans[i][j]);
        }
        printf("\n");
    }
    return 0;
}
