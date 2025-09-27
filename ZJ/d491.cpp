// d491. 我也愛偶數 (swap 版)

#include<iostream>
using namespace std;

int main(){
    int a, b, temp, ans;
    cin >> a >> b;
    if (a > b){
        temp = a;
        a = b;
        b = temp;
    }
    for (; a <= b; a++){
        if (a % 2 == 0)
            ans += a;
    }
    cout << ans << endl;
    return 0;
}
