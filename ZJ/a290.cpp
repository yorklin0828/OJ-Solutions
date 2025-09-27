// a290. 新手訓練系列 ~ 圖論

#include<cstdio>
#include<vector>
#include<queue>
using namespace std;

int main(){
    int n, m;
    while(scanf("%d%d", &n, &m) != EOF){
        vector<vector<int>> neighbor(n + 1);
        while(m--){
            int a, b;
            scanf("%d%d", &a, &b);
            neighbor[a].push_back(b);
        }
        int cityA, cityB;
        scanf("%d%d", &cityA, &cityB);
        
        queue<int> q;
        int len = neighbor[cityA].size();
        for(int i = 0; i < len; i++){
            q.push(neighbor[cityA][i]);
        }
        
        bool ans = false;
        while(!q.empty()){
            int temp = q.front();
            q.pop();
            if(temp == cityB){
                ans = true;
                break;
            }
            int length = neighbor[temp].size();
            for(int i = 0; i < length; i++){
                q.push(neighbor[temp][i]);
            }
        }
        printf("%s\n", ans ? "Yes!!!" : " No!!!");
    }
    return 0;
}
