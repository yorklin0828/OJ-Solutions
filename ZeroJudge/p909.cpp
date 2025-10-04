// p909. 窗花 (Tracery)

#include<bits/stdc++.h>
using namespace std;

int main(){
    int col, row;
    scanf("%d%d", &col, &row);
    
    int newCol = (col == 0 ? 1 : col * 2), newRow = (row == 0 ? 1 : row * 2);
    vector<vector<int>> grid(row, vector<int>(col));
    vector<vector<int>> ans(newRow, vector<int>(newCol));
    for(int i = 0; i < row; i++){
        for(int j = 0; j < col; j++){
            scanf("%d", &grid[i][j]);
            ans[i][j] = grid[i][j];
        }
    }
    
    for(int i = 0; i < row; i++){
        for(int j = 0; j < col; j++){
            ans[i][newCol - j - 1] = ans[i][j];
        }
    }
    
    for(int i = row; i < newRow; i++){
        for(int j = 0; j < newCol; j++){
            ans[i][j] = ans[newRow - i - 1][j];
        }
    }
    
    for(int i = 0; i < newRow; i++){
        for(int j = 0; j < newCol; j++){
            printf("%d ", ans[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    
    return 0;
}
