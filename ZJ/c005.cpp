// c005. 10300 - Ecological Premium

#include<iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    for (int i = 0; i < n; i++){
        int k;
        long long int ans = 0;
        cin >> k;
        for (int j = 0; j < k; j++){
            long long int a, b, c;
            cin >> a >> b >> c;
            ans += a * c;
        }
        cout << ans << endl;
    }
    return 0;
}
