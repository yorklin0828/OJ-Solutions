// a024. 最大公因數(GCD)

#include<iostream>
using namespace std;

int main(){
    int a, b, c;
    cin >> a >> b;
    if (a < b){
        c = a;
        a = b;
        b = c;
    }
    while (a % b){
        c = a % b;
        a = b;
        b = c;
    }
    cout << b << endl;
    return 0;
}
