// b877. 我是電視迷

#include<cstdio>

int main(){
    int a, b;
    scanf("%d%d", &a, &b);
    a > b && printf("%d", b + 100 - a);
    b > a && printf("%d", b - a);
    return 0;
}
