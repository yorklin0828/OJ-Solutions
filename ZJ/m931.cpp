// m931. 1. 遊戲選角

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    scanf("%d", &n);
    vector<int> v(n);
    vector<pair<int, int>> in(n);
    for(int i = 0; i < n; i++){
        int a, b;
        scanf("%d%d", &a, &b);
        in[i].first = a;
        in[i].second = b;
        v[i] = a * a + b * b;
    }
    sort(v.begin(), v.end());
    int sec = v[n - 2];
    for(int i = 0; i < n; i++){
        if(in[i].first * in[i].first + in[i].second * in[i].second == sec){
            printf("%d %d\n", in[i].first, in[i].second);
            break;
        }
    }
    return 0;
}
