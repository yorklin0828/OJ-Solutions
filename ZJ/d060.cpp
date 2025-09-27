// d060. 還要等多久啊？

#include<iostream>
using namespace std;

int main(){
    int a;
    cin >> a;
    if (a <= 25)
        cout << 25 - a << endl << endl;
    else
        cout << 60 - a + 25 << endl;
    return 0;
}
