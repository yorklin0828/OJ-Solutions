// a058. MOD3

#include<iostream>
using namespace std;

int main(){
    int i, m0 = 0, m1 = 0, m2 = 0;
    cin >> i;
    for (; i > 0; i--){
        int a;
        cin >> a;
        if (a % 3 == 0)
            m0++;
        else if (a % 3 == 1)
            m1++;
        else
            m2++;
    }
    cout << m0 << " " <<  m1 << " " << m2;
    return 0;
}
