// e808. 3.不再傻傻等公車 (Bus)

#include<cstdio>
#include<vector>

using namespace std;

int main(){
    int n;
    scanf("%d", &n);

    pair<int, int> start;
    int a, b;
    scanf("%d%d", &a, &b);
    start = {a, b};

    vector<int> time(n);
    for(int i{}; i < n; i++){
        scanf("%d", &time[i]);
    }

    int m;
    while(scanf("%d", &m)){
        if(m == 0) break;
        pair<int, int> reach;
        reach = start;

        for(int i{}; i < m; i++){
            reach.second += time[i];
        }

        reach.first += (reach.second / 60);
        reach.second = reach.second % 60;
        reach.first = reach.first % 24;

        if(reach.first < 10) printf("0");
        printf("%d:", reach.first);
        if(reach.second < 10) printf("0");
        printf("%d\n", reach.second);
    }
    return 0;
}
