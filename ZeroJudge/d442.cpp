// d442. 10591 - Happy Number

#include<bits/stdc++.h>
using namespace std;

int n;
set<int> visited;


void solve(int num){
    string s = to_string(num);
    int length = s.size();
    visited.insert(num);

    int sum{};
    for(int i{}; i < length; i++){
        sum += (s[i] - '0') * (s[i] - '0');
    }
    if(sum == 1){
        printf("%d is a Happy number.\n", n);
        return;
    }
    if(visited.count(sum)){
        printf("%d is an Unhappy number.\n", n);
        return;
    }else{
        solve(sum);
    }
}

int main(){
    int m;
    scanf("%d", &m);

    for(int i = 1; i <= m; i++){
        scanf("%d", &n);
        printf("Case #%d: ", i);
        
        visited.clear();
        solve(n);
        visited.insert(n);
    }
    return 0;
}