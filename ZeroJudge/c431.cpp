// c431. Sort ! Sort ! Sort !
#include<cstdio>

int main(){
    int length;
    int arr[101] = {0};
    scanf("%d", &length);
    for(int i = 0; i < length; i++){
        int n;
        scanf("%d", &n);
        arr[n]++;
    }
    for(int i = 0; i <= 100; i++){
        if(arr[i] > 0){
            while(arr[i]--){
                printf("%d ", i);
            }
        }
    }
    printf("\n");
    return 0;
}
