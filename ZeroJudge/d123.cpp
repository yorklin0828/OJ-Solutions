// d123. 11063 - B2-Sequence

#include<cstdio>
#include<vector>
using namespace std;

int main(){
    int length, Case = 1;
    while(scanf("%d", &length) != EOF){
        vector<int> arr(length);
        bool B2_Sequence = true;

        for(int i = 0; i < length; i++){
            scanf("%d", &arr[i]);
            if((i == 0 && arr[i] <= 0) || (i > 0 && arr[i] < arr[i - 1])){
                B2_Sequence = false;
            }
        }

        int maxSum = arr.back() * 2;
        vector<bool> sum(maxSum + 1, false);

        if(B2_Sequence){
            for(int i = 0; i < length; i++){
                for(int j = i; j < length; j++){
                    if(sum[arr[i] + arr[j]] == true){
                        B2_Sequence = false;
                        break;
                    }else{
                        sum[arr[i] + arr[j]] = true;
                    }
                }
                if(!B2_Sequence){
                    break;
                }
            }
        }

        if(B2_Sequence){
            printf("Case #%d: It is a B2-Sequence.\n", Case);
        }else{
            printf("Case #%d: It is not a B2-Sequence.\n", Case);
        }

        Case++;
    }
    return 0;
}
