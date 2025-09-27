// a233. 排序法~~~ 挑戰極限

#include<cstdio>
#include<algorithm>
#include<vector>
using namespace std;

int main(){
    int length;
    scanf("%d", &length);
    vector<int> arr(length);
    for(int i = 0; i < length; i++){
        scanf("%d", &arr[i]);
    }
    sort(arr.begin(), arr.end());

    for(int i : arr){
        printf("%d ", i);
    }
}
