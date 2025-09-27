// f103. 切牌 (n 行版)

#include<iostream>
#include<vector>
using namespace std;

int main(){
    int n, m;
    cin >>  n >> m;
    
    vector<string> strArr(n);
    for(int i = 0; i < n; i++){
        cin >> strArr[i];
    }
    for(int i = m; i < n; i++){
        cout << strArr[i] << "\n";
    }
    for(int i = 0; i < m; i++){
        cout << strArr[i] << "\n";
    }
    return 0;
}
