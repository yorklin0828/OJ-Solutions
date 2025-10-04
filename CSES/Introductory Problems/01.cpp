#include<bits/stdc++.h>
using namespace std;

int main(){
    int p, d, t, c;
    scanf("%d%d%d%d", &p, &d, &t, &c);
    if(d >= 30 && c == 0) p -= 5;
    if(d <= 15 && c == 1) p -= 5;
    if(t >= 7 && t <= 10) p -= 5;
    if(t >= 14 && t <= 16) p -= 5;
    printf("%d", p);
    return 0;
}
