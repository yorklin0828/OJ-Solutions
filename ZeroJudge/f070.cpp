// f070. 1. 韓信點兵 (HanXin)

#include<bits/stdc++.h>
using namespace std;

int main(){
    int m1, n1, m2, n2, m3, n3;
    scanf("%d%d%d%d%d%d", &m1, &n1, &m2, &n2, &m3, &n3);

    int Max = -1;
    while(true){
        if(n1 == n2 && n2 == n3){
            printf("%d", n1);
            return 0;
        }

        Max = max(n1, max(n2, n3));

        if(n1 != Max){
            n1 += m1;
        }
        if(n2 != Max){
            n2 += m2;
        }
        if(n3 != Max){
            n3 += m3;
        }
    }
    return 0;
}
