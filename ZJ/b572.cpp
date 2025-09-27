// b572. 忘了東西的傑克

#include<iostream>
using namespace std;

int main(){
    int i;
    cin >> i;
    for(; i > 0; i--){
        int a, b, c, d, e, f = 0;
        cin >> a >> b >> c >> d >> e;
        if (a != c){
            f = c - a;
            c = a;
            d = d + (f * 60);
        }
        if (d - b >= e)
            cout << "Yes" << endl;
        else
            cout << "No" << endl;
    }
    return 0;
}
