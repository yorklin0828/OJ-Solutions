// o712. 2. 蒐集寶石

#include<bits/stdc++.h>
using namespace std;

int dx[4] = {0, 1, 0, -1};
int dy[4] = {1, 0, -1, 0};

int main(){
    int row, col, k, x, y;
    scanf("%d%d%d%d%d", &row, &col, &k, &x, &y);
    
    vector<vector<int>> grid(row, vector<int>(col, 0));
    for(int i = 0; i < row; i++){
        for(int j = 0; j < col; j++){
            scanf("%d", &grid[i][j]);
        }
    }
    
    int score = 0, ans = 0, dir = 0;
    while(grid[x][y] > 0){
        score += grid[x][y];
        grid[x][y]--;
        ans++;
        
        if(score % k == 0){
            dir = (dir + 1) % 4;
        }
        
        int nx = x + dx[dir], ny = y + dy[dir];
        while(nx < 0 || nx >= row || ny < 0 || ny >= col || grid[nx][ny] == -1){
            dir = (dir + 1) % 4;
            nx = x + dx[dir], ny = y + dy[dir];
        }
        x = nx; y = ny;
    }
    printf("%d", ans);
    return 0;
}
