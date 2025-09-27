// p907. 學測 (Examination)

#include<bits/stdc++.h>
using namespace std;

int main(){
    int grade[6];
    for(int i = 0; i < 6; i++){
        scanf("%d", &grade[i]);
    }
    
    vector<vector<int>> v(6, vector<int>(5));
    int row = 6, col = 5;
    for(int i = 0; i < row; i++){
        for(int j = 0; j < col; j++){
            scanf("%d", &v[i][j]);
        }
    }
    
    vector<char> ans(6);
    for(int i = 0; i < row; i++){
        if(grade[i] == 0) ans[i] = 'X';
        else if(grade[i] >= v[i][0]) ans[i] = 'A';
        else if(grade[i] >= v[i][1]) ans[i] = 'B';
        else if(grade[i] >= v[i][2]) ans[i] = 'C';
        else if(grade[i] >= v[i][3]) ans[i] = 'D';
        else if(grade[i] >= v[i][4]) ans[i] = 'E';
        else ans[i] = 'F';
    }
    for(int i = 0; i < 6; i++){
        printf("%c\n", ans[i]);
    }
    return 0;
}
