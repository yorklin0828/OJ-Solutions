// d097. 10038 - Jolly Jumpers

#include<cstdio>
#include<cmath>
#include<vector>
using namespace std;

int main(){
    int length;
    while(scanf("%d", &length) != EOF){
        vector<int> arr(length);
        vector<int> count(length, 0);
        for(int i = 0; i < length; i++){
            scanf("%d", &arr[i]);
            if(i != 0){
                count[abs(arr[i] - arr[i - 1])] = 1;
            }
        }
        bool jolly = true;
        for(int i = 1; i < length; i++){
            if(count[i] == 0){
                jolly = false;
                break;
            }
        }
        if(jolly){
            printf("Jolly\n");
        }else{
            printf("Not jolly\n");
        }
    }
    return 0;
}
