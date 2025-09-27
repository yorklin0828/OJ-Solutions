// q837. 2. 轉盤得分

#include<bits/stdc++.h>
using namespace std;

int main(){
    int r, c, k;
    scanf("%d%d%d", &r, &c, &k);
    
    vector<vector<char>> v(r, vector<char>(c));
    for(int i = 0; i < r; i++){
        for(int j = 0; j < c; j++){
            scanf(" %c", &v[i][j]);
        }
    }
    
    int ans = 0;
    while(k--){
        for(int i = 0; i < r; i++){
            int n;
            scanf("%d", &n);
            if(!n) continue;
            
            bool turnRight = false;
            if(n > 0) turnRight = true;
            
            if(turnRight){
                while(n--){
                    v[i].insert(v[i].begin(), v[i].back());
                    v[i].pop_back();
                }
            }else{
                while(n++){
                    v[i].push_back(*v[i].begin());
                    v[i].erase(v[i].begin());
                }
            }
        }
        for(int i = 0; i < c; i++){
            unordered_map<char,int> freq;
            int Max = 0;
            for(int j = 0; j < r; j++){
                char ch = v[j][i];
                freq[ch]++;
                Max = max(Max, freq[ch]);
            }
            ans += Max;
        }
    }
    
    printf("%d", ans);
    return 0;
}
