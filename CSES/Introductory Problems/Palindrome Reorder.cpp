#include<bits/stdc++.h>
using namespace std;

#define ll long long

unordered_map<char, ll> um;
vector<char> ans;

int main(){
    char c;
    while(scanf(" %c", &c) != EOF){
        um[c]++;
        if(um[c] == 2){
            um.erase(c);
            ans.emplace_back(c);
        }
    }

    if(um.size() > 1){
        printf("NO SOLUTION");
        return 0;
    }

    ll len = ans.size();
    for(int i = 0; i < len; i++){
        printf("%c", ans[i]);
    }

    if(!um.empty()){
        auto it = um.begin();
        char ch = it->first;
        printf("%c", ch);
    }

    for(int i = --len; i >= 0; i--){
        printf("%c", ans[i]);
    }

    return 0;
}

