// b758. 牛仔(ㄗˇ)很忙

#include<iostream>
using namespace std;

int main(){
    int a, b;
    cin >> a >> b;
    a += 2;
    b += 30;
    if (b >= 60){
        b -= 60;
        a += 1;
    }
    if (a >= 24)
        a -= 24;

    if (a < 10)
        cout << 0 << a << ":";
    else
        cout << a << ":";

    if (b < 10)
        cout << 0 << b << endl;
    else
        cout << b << endl;
    return 0;
}
