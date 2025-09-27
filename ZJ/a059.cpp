// a059. 完全平方和

#include<iostream>
#include<cmath>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++){
        int a, b, ans = 0;
        cin >> a >> b;
        for (; b >= a; a++){
            for (int j = 1; j <= sqrt(a); j++){
                if (a % j == 0 && sqrt(a) == j)
                    ans += a;
            }
        }
        cout << "Case " << i << ": " << ans << endl;
    }
    return 0;
}
