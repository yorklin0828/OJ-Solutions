// 	e447. queue 練習

#include<cstdio>
#include<queue>
using namespace std;

int main(){
    int n;
    scanf("%d", &n);
    queue<int> q;
    while(n--){
        int k;
        scanf("%d", &k);
        if(k == 1){
            int x;
            scanf("%d", &x);
            q.push(x);
        }else if(k == 2){
            if(q.empty()){
                printf("-1\n");
            }else{
                printf("%d\n", q.front());
            }
        }else{
            if(!q.empty()){
                q.pop();
            }
        }
    }
    return 0;
}
