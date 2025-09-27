// e287. 機器人的路徑

#include<bits/stdc++.h>
using namespace std;

int main(){
    int row, col;
    scanf("%d%d", &row, &col);

    int Min = 1000000, minX = 0, minY = 0;
    vector<vector<int>> grid(row, vector<int>(col));
    for(int i = 0; i < row; i++){
        for(int j = 0; j < col; j++){
            scanf("%d", &grid[i][j]);
            if(grid[i][j] < Min){
                Min = grid[i][j];
                minX = i;
                minY = j;
            }
        }
    }
    queue<pair<int, int>> q;
    q.push({minX, minY});
    int dx[4] = {0, 0, 1, -1};
    int dy[4] = {1, -1, 0, 0};

    int ans = 0;
    while(!q.empty()){
        auto [x, y] = q.front(); q.pop();
        Min = 1000000;
        ans += grid[x][y];
        grid[x][y] = -1;
        
        bool haveNext = false;
        for(int i = 0; i < 4; i++){
            int nx = x + dx[i];
            int ny = y + dy[i];
            if(nx >= 0 && nx < row && ny >= 0 && ny < col && grid[nx][ny] != -1){
                if(grid[nx][ny] < Min){
                    Min = grid[nx][ny];
                    minX = nx;
                    minY = ny;
                    haveNext = true;
                }
            }
        }
        if(haveNext) q.push({minX, minY});
    }
    printf("%d", ans);
    return 0;
}
