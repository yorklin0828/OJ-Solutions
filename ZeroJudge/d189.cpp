// d189. 11150 - Cola

#include<iostream>
using namespace std;

int main(){
    int n, ans, empty, change;
    while (cin >> n){
        empty = n;
        ans = n;
        while (empty >= 3){
            change = empty / 3;
            ans += change;
            empty %= 3;
            empty += change;
        }
        if (empty == 2){
            cout << ans + 1 << endl;
        }else if (empty == 0 || empty == 1)
            cout << ans << endl;
    }
    return 0;
}
