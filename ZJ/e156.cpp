// e156. 良心題: 求和

#include<cstdio>

int sum(int n){
    int s = n;
    n && (s += sum(n - 1));
    return s;
}

int main(){
    int n;
    scanf("%d", &n);
    printf("%d", sum(n));
    return 0;
}
