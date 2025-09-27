// a005. Eva 的回家作業

#include<iostream>
using namespace std;

int main(){
    int i;
    cin >> i;
    for (; i > 0; i--){
        int a, b, c, d, e;
        cin >> a >> b >> c >> d;
        if ((d - c) == (c - b))
            e = d + (d - c);
        else if ((d / c) == (c / b))
            e = d * (d / c);
        cout << a << " " << b << " " << c << " " << d << " " << e << endl;
    }
    return 0;
}
