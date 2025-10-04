// 	c381. 聖經密碼

#include<iostream>
#include<vector>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n, m;
    while(cin >> n >> m){
        if(n + m == 0){
            break;
        }
        vector<char> arr;
        for(int i = 0; i < n; i++){
            string s;
            cin >> s;
            int len = s.size();
            for(int j = 0; j < len; j++){
                arr.push_back(s[j]);
            }
        }

        vector<char> ansArr;
        for(int i = 0; i < m; i++){
            int k;
            cin >> k;

            int len = arr.size();
            if (k > len){
                k = k - len - 1;
            }
            cout << arr[k - 1];
        }
        cout << "\n";
    }
    return 0;
}
