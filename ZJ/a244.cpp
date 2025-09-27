// a244. 新手訓練 ~ for + if

#include<iostream>
using namespace std;

int main(){
    long int a, b, c, d;
    cin >> a;
    for (; a > 0; a--){
        cin >> b >> c >> d;
        if (b == 1) cout << c + d << endl;
        else if (b == 2) cout << c - d << endl;
        else if (b == 3) cout << c * d << endl;
        else if (b == 4) cout << int(c / d) << endl;
    }
    return 0;
}
