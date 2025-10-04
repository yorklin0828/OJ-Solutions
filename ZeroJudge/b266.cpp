// b266. 矩陣翻轉

#include<iostream>
#include<vector>
using namespace std;

vector<vector<int>> rotate(vector<vector<int>>& arr){
    int row = arr.size(), col = arr[0].size();
    vector<vector<int>> result(col, vector<int>(row));
    for(int i = 0; i < row; i++){
        for(int j = 0; j < col; j++){
            result[col - j - 1][i] = arr[i][j];
        }
    }
    return result;
}

vector<vector<int>> flip(vector<vector<int>>& arr){
    int row = arr.size(), col = arr[0].size();
    vector<vector<int>> result(row, vector<int>(col));
    for(int i = 0; i < row; i++){
        for(int j = 0; j < col; j++){
            result[i][j] = arr[row - i - 1][j];
        }
    }
    return result;
}

int main(){
    int row, col, m;
    cin >> row >> col >> m;
    vector<vector<int>> arr(row, vector<int>(col));
    for(int i = 0; i < row; i++){
        for(int j = 0; j < col; j++){
            cin >> arr[i][j];
        }
    }
    vector<int> k(m);
    for(int i = 0; i < m; i++){
        cin >> k[i];
    }
    for(int i = m - 1; i >= 0; i--){
        if(k[i]){
            arr = flip(arr);
        }else{
            arr = rotate(arr);
        }
    }
    row = arr.size();
    col = arr[0].size();
    cout << row << " " << col << "\n";
    for(int i = 0; i < row; i++){
        for(int j = 0; j < col; j++){
            cout << arr[i][j] << " ";
        }
        cout << "\n";
    }
    return 0;
}
