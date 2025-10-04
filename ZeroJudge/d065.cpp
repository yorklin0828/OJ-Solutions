// d065. 三人行必有我師 (1 行版)

#include<iostream>
using namespace std;

int main(){
    int a, b, c, ans;
    cin >> a >> b >> c;
    ans = a;
    if (b > ans)
        ans = b;
    if (c > ans)
        ans = c;
    cout << ans << endl;
    return 0;
}
