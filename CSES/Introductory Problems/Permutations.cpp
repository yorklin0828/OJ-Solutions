#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    scanf("%d", &n);
    if(n == 1){
        printf("1");
    }else if(n < 4){
        printf("NO SOLUTION");
    }else{
        vector<int> arr(n);
        int len = arr.size();
        for(int i = 2; i <= len; i += 2){
            printf("%d ", i);
        }
        for(int i = 1; i <= len; i += 2){
            printf("%d ", i);
        }
        printf("\n");
    }
    return 0;
}
