// 	h081. 1. 程式交易

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, m;
    scanf("%d%d", &n, &m);

    bool haveTicket = false;
    int lastbuy = 0, lastsell = 0, ans = 0;

    for(int i = 0; i < n; i++){
        int x;
        scanf("%d", &x);
        if(!haveTicket){
            if(!i || x <= lastsell - m){
                haveTicket = true;
                lastbuy = x;
            }
        }else{
            if(x >= lastbuy + m){
                ans += x - lastbuy;
                haveTicket = false;
                lastsell = x;
            }
        }
    }
    printf("%d", ans);
    return 0;
}
