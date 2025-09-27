// a647. 投資專家

#include<iostream>
#include<iomanip>
using namespace std;

int main(){
    int i;
    cin >> i;
    for (; i > 0; i--){
        double a, b;
        cin >> a >> b;
        double f;
        f = (b - a) / a;
        if (f >= 0)
            f += 0.0000001;
        else
            f -= 0.0000001;
        f *= 100;
        if (f >= 10 || f <= -7)
            cout << fixed << setprecision(2) << f << "%" << " dispose" << endl;
        else
            cout << fixed << setprecision(2) << f << "% keep" << endl;
    }
    return 0;
}
