// d490. 我也愛偶數

#include<iostream>
using namespace std;

int main(){
    int a, b, ans = 0;
    cin >> a >> b;
    for (; b >= a; a++){
        if (a % 2 == 0)
            ans += a;
    }
    cout << ans << endl;
    return 0;
}
