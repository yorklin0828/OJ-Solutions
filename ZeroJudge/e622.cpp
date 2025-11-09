// e622. 3. 虛擬寵物大師 (Master)

#include <cstdio>

int main(){
    int n, s;
    scanf("%d%d", &n, &s);

    int maxCp = -1, index{}, add{};
    for(int i = 1; i <= n; i++){
        int cp, iv;
        scanf("%d%d", &cp, &iv);

        add = (iv >= 40 ? 100 : (iv >= 30 ? 50 : 10));
        int tmp = s;
        while(tmp >= 1000){
            cp += add;
            tmp -= 1000;
        }
        if(cp > maxCp){
            maxCp = cp;
            index = i;
        }
    }
    printf("%d %d\n", index, maxCp);
    return 0;
}