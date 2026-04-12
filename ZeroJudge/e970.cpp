// e970. 1. 粉專抽獎 (Lucky Draw)

#include<cstdio>
#include<vector>

using namespace std;

int main(){
    int n;
    scanf("%d", &n);

    vector<int> v(n, 0);
    for(int i{}; i < n; i++){
        scanf("%d", &v[i]);
    }

    int b = v[n - 1];
    vector<int> index;
    for(int i = 1; i <= n; i++){
        if(i % b == 1) index.emplace_back(i);
    }

    int length = index.size(), sum{};
    for(int i{}; i < length; i++){
        sum += v[index[i] - 1];
    }

    int m = sum % n;
    if(m){
        printf("%d %d", m, v[m - 1]);
    }else{
        printf("%d %d", v.size(), v[v.size() - 1]);
    }
    return 0;
}
