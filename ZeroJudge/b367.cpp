// b367. 翻轉世界

#include<cstdio>
#include<vector>
using namespace std;

int main(){
    int n;
    scanf("%d", &n);
    while(n--){
        int r, m;
        scanf("%d%d", &r, &m);

        int length = r * m;
        vector<int> arr(length, 0);
        for(int i = 0; i < length; i++){
            scanf("%d", &arr[i]);
        }

        bool forward = true;
        for(int i = 0; i < length; i++){
            if(arr[i] != arr[length - 1 - i]){
                forward = false;
                break;
            }
        }

        if(forward){
            printf("go forward\n");
        }else{
            printf("keep defending\n");
        }
    }
    

    return 0;
}
