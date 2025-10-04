// d050. 妳那裡現在幾點了？

#include<iostream>
using namespace std;

int main(){
    int a;
    cin >> a;
    if (a - 15 < 0) cout << a - 15 + 24 << endl;
    else cout << a - 15 << endl;
    return 0;
}
