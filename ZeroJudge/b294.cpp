// b294. 經濟大恐荒

#include<iostream>
using namespace std;

int main(){
    int n, ans = 0;
    cin >> n;
    for (int i = 1; i <= n; i++){
        int a;
        cin >> a;
        ans += a * i;
    }
    cout << ans << endl;
    return 0;
}
