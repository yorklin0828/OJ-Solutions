// a015. 矩陣的翻轉

#include<cstdio>

int main(){
    int n, m;
    while(scanf("%d %d", &n, &m) != EOF){
        int arr[n][m];
        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++){
                scanf("%d", &arr[i][j]);
            }
        }
        for(int i = 0; i < m; i++){
            for(int j = 0; j < n; j++){
                printf("%d ", arr[j][i]);
            }
            printf("\n");
        }
    }
}