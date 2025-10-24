// c124. 00532 - Dungeon Master

#include <cstdio>
#include <queue>

using namespace std;

int dx[6] = {0, 0, 0, 0, 1, -1};
int dy[6] = {0, 0, 1, -1, 0, 0};
int dz[6] = {1, -1, 0, 0, 0, 0};

struct pos{ int x, y, z; };

int main(){
    int l, r, c;
    while(scanf("%d%d%d", &l, &r, &c) != EOF){
        if(l + r + c == 0) break;

        vector<vector<vector<char>>> dungeon(l, vector<vector<char>>(r, vector<char>(c)));
        pos start{}, end{};
        for(int i{}; i < l; i++){
            for(int j{}; j < r; j++){
                for(int k{}; k < c; k++){
                    scanf(" %c", &dungeon[i][j][k]);
                    if(dungeon[i][j][k] == 'S'){
                        start = {i, j, k};
                    }else if(dungeon[i][j][k] == 'E'){
                        end = {i, j, k};
                    }
                }
            }
        }

        queue<pos> q;
        vector<vector<vector<int>>> dist(l, vector<vector<int>>(r, vector<int>(c, 0)));
        dist[start.x][start.y][start.z] = 1;
        q.push(start);

        while(!q.empty()){
            pos cur = q.front();
            q.pop();
            if(cur.x == end.x && cur.y == end.y && cur.z == end.z) break;

            for(int i{}; i < 6; i++){
                pos next = {cur.x + dx[i], cur.y + dy[i], cur.z + dz[i]};
                if(next.x >= l || next.x < 0 
                    || next.y >= r || next.y < 0 
                        || next.z >= c || next.z < 0 
                            || dungeon[next.x][next.y][next.z] == '#' 
                                || dist[next.x][next.y][next.z] != 0){
                    continue;
                }
                dist[next.x][next.y][next.z] = dist[cur.x][cur.y][cur.z] + 1;
                q.push({next.x, next.y, next.z});
            }
        }
        if(dist[end.x][end.y][end.z] == 0){
            printf("Trapped!\n");
        }else{
            printf("Escaped in %d minute(s).\n", dist[end.x][end.y][end.z] - 1);
        }
    }
    return 0;
}