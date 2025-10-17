// c124. 00532 - Dungeon Master

#include<bits/stdc++.h>

using namespace std;
using ll = long long;

dx[4] = {0, 0, 1, -1};
dy[4] = {1, -1, 0, 0};
dz[2] = {1, -1};

int main(){
    int l, r, c;
    while(scanf("%d%d%d", &l, &r, &c) != EOF){
        if(l + r + c == 0) break;

        vector<vector<vector<char>>> dungeon(l, vector<vector<int>>(r, vector<int>(c)));
        for(int i = 0; i < l; i++){
            for(int j = 0; j < r; j++){
                for(int k = 0; k < c; k++){
                    scanf(" %c", &dungeon[i][j][k]);
                    if(dungeon[i][j][k] = 'S')
                }
            }
        }

    }
    return 0;
}
