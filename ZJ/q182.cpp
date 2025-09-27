// q182. 2. 字串操作

#include<bits/stdc++.h>
using namespace std;

string solution(int k, int len, string s){
    if(k == 0){
        for(int i = 1; i < len; i += 2){
            swap(s[i], s[i - 1]);
        }
        return s;
    }else if(k == 1){
        for(int i = 1; i < len; i += 2){
            if(s[i] < s[i - 1]){
                swap(s[i], s[i - 1]);
            }
        }
        return s;
    }else{
        int mid = (len + 1) / 2, index = 0;
        string result;
        for(int i = 0; i < len; i++){
            if(i & 1){
                result += s[mid + index];
                index++;
            }else{
                result += s[index];
            }
        }
        return result;
    }
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    string s;
    int n;
    cin >> s >> n;
    
    while(n--){
        int k;
        cin >> k;
        int len = s.size();
        s = solution(k, len, s);
    }
    cout << s << "\n";
    return 0;
}
