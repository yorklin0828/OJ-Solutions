// m932. 2. 蜜蜂觀察

#include<bits/stdc++.h>
using namespace std;

int main(){
    int row, col, n;
    scanf("%d%d%d", &row, &col, &n);
    
    vector<vector<char>> grid(row, vector<char>(col));
    for(int i = 0; i < row; i++){
        for(int j = 0; j < col; j++){
            scanf(" %c", &grid[i][j]);
        }
    }
    
    int dx[6] = {-1, 0, 1, 1, 0, -1};
    int dy[6] = {0, 1, 1, 0, -1, -1};
    
    int x = row - 1, y = 0;
    
    vector<char> arr;
    while(n--){
        int k;
        scanf("%d", &k);
        int nx = x + dx[k];
        int ny = y + dy[k];
        if(nx >= 0 && nx < row && ny >= 0 && ny < col && grid[nx][ny] != '0'){
            arr.emplace_back(grid[nx][ny]);
            printf("%c", grid[nx][ny]);
            x = nx;
            y = ny;
        }else{
            arr.emplace_back(grid[x][y]);
            printf("%c", grid[x][y]);
        }
    }
    int len = arr.size(), ans = 0;
    vector<char> visited;
    for(int i = 0; i < len; i++){
        if(count(visited.begin(), visited.end(), arr[i]) == 0) ans++;
        visited.emplace_back(arr[i]);
    }
    printf("\n%d", ans);
    return 0;
}
