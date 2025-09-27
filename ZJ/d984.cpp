// d984. 棄保效應

#include<cstdio>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    vector<pair<char, long long int>> arr;
    long long int a, b, c;
    while(scanf("%lld%lld%lld", &a, &b, &c) != EOF){
        arr.push_back(make_pair('A', a));
        arr.push_back(make_pair('B', b));
        arr.push_back(make_pair('C', c));
    
    
        sort(arr.begin(), arr.end(), [](auto &x, auto &y){
            return x.second < y.second;
        });
            
        if(arr[0].second + arr[1].second > arr[2].second){
            printf("%c\n", arr[1].first);
        }else{
            printf("%c\n", arr[2].first);
        }
        arr.clear();
    }
    return 0;
}
