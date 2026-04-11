#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> a(1001, 0);
    vector<int> b(1001, 0);

    int x, y;
    scanf("%d", &x);
    for(int i = 0; i < x; i++){
        int n, m;
        scanf("%d%d", &n, &m);
        a[n] = m;
    }

    scanf("%d", &y);
    for(int i = 0; i < y; i++){
        int n, m;
        scanf("%d%d", &n, &m);
        b[n] = m;
    }

    bool output = false;
    for(int i = 1000; i >= 0; i--){
        if((a[i] + b[i]) != 0){
            output = true;
            printf("%d:%d\n", i, (a[i] + b[i]));
        }
    }
    if(!output) printf("NULL!");
    return 0;
}
