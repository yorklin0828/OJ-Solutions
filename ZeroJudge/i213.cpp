// i213. stack 練習

#include<cstdio>
#include<stack>
using namespace std;

int main(){
    int n;
    scanf("%d", &n);
    stack<int> s;
    while(n--){
        int k;
        scanf("%d", &k);
        if(k == 1){
            int x;
            scanf("%d", &x);
            s.push(x);
        }else if(k == 2){
            if(s.empty()){
                printf("-1\n");
            }else{
                printf("%d\n", s.top());
            }
        }else{
            if(!s.empty()){
                s.pop();
            }
        }
    }
    return 0;
}
