// d453. 三、最短距離

#include<cstdio>
#include<vector>
#include<queue>
using namespace std;

int main(){
    int n;
    scanf("%d", &n);

    int dx[4] = {0, 0, 1, -1};
    int dy[4] = {1, -1, 0, 0};

    while(n--){
        int row, col, startX, startY, endX, endY;
        scanf("%d%d%d%d%d%d", &row, &col, &startX, &startY, &endX, &endY);

        vector<vector<int>> grid(row, vector<int>(col));
        startX--, startY--, endX--, endY--;

        for(int i = 0; i < row; i++){
            for(int j = 0; j < col; j++){
                scanf("%1d", &grid[i][j]);
            }
        }

        queue<pair<int, int>> q;
        q.emplace(startX, startY);

        vector<vector<int>> dist(row, vector<int>(col, 0));
        dist[startX][startY] = 1;

        while(!q.empty()){
            auto cur = q.front();
            q.pop();
            int curX = cur.first, curY = cur.second;

            if(curX == endX && curY == endY){
                break;
            }

            for(int i = 0; i < 4; i++){
                int nextX = curX + dx[i];
                int nextY = curY + dy[i];
                if(nextX >= 0 && nextX < row && nextY >= 0 && nextY < col && grid[nextX][nextY] == 0 && dist[nextX][nextY] == 0){
                    dist[nextX][nextY] = dist[curX][curY] + 1;
                    q.emplace(nextX, nextY);
                }
            }
        }
        printf("%d\n", dist[endX][endY]);
    }
    return 0;
}
