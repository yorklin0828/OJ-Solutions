// a130. 12015 - Google is Feeling Lucky

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    
    for(int j = 1; j <= n; j++){
        vector<pair<string, int>> a(10);
        int Max = -1;
        for(int i = 0; i < 10; i++){
            string s;
            int k;
            cin >> s >> k;
            a[i] = {s, k};
            Max = max(Max, k);
        }
        
        cout << "Case #" << j << ":\n";
        for(int i = 0; i < 10; i++){
            if(a[i].second == Max){
                cout << a[i].first << "\n";
            }
        }
    }
    return 0;
}
