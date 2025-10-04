// a053. Sagit's 計分程式

#include<iostream>
using namespace std;

int main(){
    int a;
    cin >> a;
    if (a <= 10)
        cout << 6 * a << endl;
    else if (a <= 20)
        cout << 60 + (a - 10) * 2 << endl;
    else if (a <= 40)
        cout << 80 + (a - 20) << endl;
    else
        cout << 100 << endl;
    return 0;
}
