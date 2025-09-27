// q380. 島嶼 (Island) 

#include<cstdio>
#include<vector>
#include<queue>
#include<stack>
using namespace std;

int main(){
    int row, col;
    scanf("%d%d", &row, &col);
    
    vector<vector<int>> grid(row, vector<int>(col));
    stack<pair<int, int>> s;
    queue<pair<int, int>> q;
    bool isFind = false;
    for(int i = 0; i < row; i++){
        for(int j = 0; j < col; j++){
            scanf("%d", &grid[i][j]);
            if(grid[i][j] == 1){
                if(!isFind){
                    s.push({i, j});
                    q.push({i, j});
                    grid[i][j] = -1;
                    isFind = true;
                }
            }
        }
    }
    
    int dx[4] = {0, 0, 1, -1};
    int dy[4] = {1, -1, 0, 0};
    
    while(!s.empty()){
        auto [x, y] = s.top(); s.pop();
        for(int i = 0; i < 4; i++){
            int nx = x + dx[i];
            int ny = y + dy[i];
            if(nx >= 0 && nx < row && ny >= 0 && ny < col && grid[nx][ny] == 1){
                grid[nx][ny] = -1;
                s.push({nx, ny});
                q.push({nx, ny});
            }
        }
    }
    
    int step = 0;
    isFind = false;
    while(!q.empty()){
        int size = q.size();
        while(size--){
            auto [x, y] = q.front(); q.pop();
            for(int i = 0; i < 4; i++){
                int nx = x + dx[i];
                int ny = y + dy[i];
                if(nx >= 0 && nx < row && ny >= 0 && ny < col){
                    if(grid[nx][ny] == 0){
                        grid[nx][ny] = -1;
                        q.push({nx, ny});
                    }else if(grid[nx][ny] == 1){
                        isFind = true;
                    }
                }
            }
            if(isFind) break;
        }
        if(isFind) break;
        step++;
    }
    printf("%d", isFind ? step : -1);
    return 0;
}
