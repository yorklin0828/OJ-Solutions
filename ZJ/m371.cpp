// m371. 2. 卡牌遊戲

#include<bits/stdc++.h>
using namespace std;

int dx[4] = {0, 0, 1, -1};
int dy[4] = {1, -1, 0, 0};

int main(){
    int row, col;
    scanf("%d%d", &row, &col);
    vector<vector<int>> grid(row, vector<int>(col, 0));
    
    for(int i = 0; i < row; i++){
        for(int j = 0; j < col; j++){
            scanf("%d", &grid[i][j]);
        }
    }
    
    int ans = 0;
    for(int i = 0; i < row; i++){
        for(int j = 0; j < col; j++){
            for(int k = 0; k < 4; k++){
                int nx = i + dx[k];
                int ny = j + dy[k];
                if(nx >= 0 && nx < row && ny >= 0 && ny < col){
                    while(grid[nx][ny] == -1 && nx >= 0 && nx < row && ny >= 0 && ny < col){
                        nx += dx[k];
                        ny += dy[k];
                    }
                    if(grid[i][j] == grid[nx][ny]){
                        ans += grid[i][j];
                        grid[i][j] = -1;
                        grid[nx][ny] = -1;  
                    }
                }
            }
        }
    }
    printf("%d", ans);

    return 0;
}
