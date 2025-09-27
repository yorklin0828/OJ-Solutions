// c382. 加減乘除

#include<iostream>
using namespace std;

int main(){
    int a, b;
    string s;
    cin >> a >> s >> b;
    if (s == "+")
        cout << a + b << endl;
    else if (s == "-")
        cout << a - b << endl;
    else if (s == "*")
        cout << a * b << endl;
    else if (s == "/")
        cout << int(a / b) << endl;
    return 0;
}
