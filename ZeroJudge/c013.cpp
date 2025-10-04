// c013. 00488 - Triangle Wave

#include<cstdio>

int main(){
    int n;
    scanf("%d", &n);
    while(n--){
        int a, f;
        scanf("%d%d", &a, &f);
        while(f--){
            for(int i = 1; i <= a; i++){
                for(int j = 0; j < i; j++){
                    printf("%d", i);
                }
                printf("\n");
            }
            for(int i = a - 1; i > 0; i--){
                for(int j = 0; j < i; j++){
                    printf("%d", i);
                }
                printf("\n");
            }
            printf("\n");
        }
    }
    return 0;
}
