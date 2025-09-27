// a693. 吞食天地

#include<cstdio>
#include<vector>
using namespace std;

int main(){
    int n, m;
    while(scanf("%d%d", &n, &m) != EOF){

        vector<int> prefix(n + 1, 0);
        for(int i = 0; i < n; i++){
            scanf("%d", &prefix[i + 1]);
            prefix[i + 1] += prefix[i];
        }

        while(m--){
            int i, j;
            scanf("%d%d", &i, &j);
            printf("%d\n", prefix[j] - prefix[i - 1]);
        }
    }
    return 0;
}
