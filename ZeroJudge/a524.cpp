// a524. 手機之謎

#include<bits/stdc++.h>
using namespace std;

int n;

int main(){
    while(scanf("%d", &n) != EOF){
        vector<int> nums;
        for(int i = 1; i <= n; i++){
            nums.emplace_back(n - i + 1);
        }

        do{
            int length = nums.size();
            for(int i{}; i < length; i++){
                printf("%d", nums[i]);
            }
            printf("\n");
        }while(next_permutation(nums.begin(), nums.end(), greater<>()));
    }
    return 0;
}