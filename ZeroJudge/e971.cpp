// e970. 1. 粉專抽獎 (Lucky Draw)

#include<cstdio>
#include<vector>

using namespace std;

int main(){
    int row, col;
    scanf("%d%d", &row, &col);
    
    vector<vector<int>> grid(row, vector<int>(col, 0));
    for(int i{}; i < row; i++){
        for(int j{}; j < col; j++){
            scanf("%d", &grid[i][j]);
        }
    }
    
    int Begin = -1, End = -1;
    for(int i{}; i < row; i++){
        for(int j{}; j < col; j++){
            if(grid[i][j] == 1 && Begin == -1){
                Begin = j;
            }else if(grid[i][j] == 1 && End == -1){
                End = j;
            }
            if(Begin != -1 && End != -1){
                for(int k = Begin + 1; k < End; k++){
                    grid[i][k] = 1;
                }
                Begin = -1;
                End = -1;
            }
        }
        Begin = -1;
        End = -1;
    }
    
    for(int i{}; i < row; i++){
        for(int j{}; j < col; j++){
            printf("%d", grid[i][j]);
            printf("%s", (j == col - 1 ? "\n" : " "));
        }
    }
    return 0;
}
