// e623. 2. PPAP

#include <cstdio>

int main(){
    int n;
    scanf("%d", &n);

    int cnt = 4, idx = 1;
    while(n > cnt){
        n -= cnt;
        cnt += 4;
        idx++;
    }
    if(n > (idx * 3)) printf("Pineapple pen\n");
    else if(n > (idx * 2)) printf("Apple\n");
    else if(n > idx) printf("Pineapple\n");
    else printf("Pen\n");

    return 0;
}