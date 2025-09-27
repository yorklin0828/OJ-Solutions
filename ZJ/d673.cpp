// 	d673. 11608 - No Problem 

#include<cstdio>
#include<vector>
using namespace std;

int main(){
    int n;
    int Case = 1;
    while(scanf("%d", &n) != EOF){
        if(n < 0){
            break;
        }

        int sumProblem = n;
        vector<int> problem(12);
        vector<int> use(12);
        
        for(int i = 0; i < 12; i++){
            scanf("%d", &problem[i]);
        }
        for(int i = 0; i < 12; i++){
            scanf("%d", &use[i]);
        }

        printf("Case %d:\n", Case);
        for(int i = 0; i < 12; i++){
            if(i > 0){
                sumProblem += problem[i - 1];
            }
            if(sumProblem >= use[i]){
                printf("No problem! :D\n");
                sumProblem -= use[i];
            }else{
                printf("No problem. :(\n");
            }
        }
        Case++;
    }
    return 0;
}
