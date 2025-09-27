// b860. 獨角蟲進化計算器

#include<iostream>
using namespace std;

int main(){
    int c, b, e = 0;
    cin >> c >> b;
    while (c < 12 && b > 0){
        b--;
        c++;
    }
    while (c >= 12 && b > 0){
        c -= 10;
        b--;
        e++;
        while (c < 12 && b > 0){
            b--;
            c++;
        }
    }
    cout << e << endl;
    return 0;
}
