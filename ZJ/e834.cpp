// e834. P1.批發出貨(Wholesale)

#include<iostream>
using namespace std;

int main(){
    int i, t;
    cin >> i;
    while (cin >> t){
        if (t == 0)
            break;
        if (t % i == 0)
            cout << t / i << endl;
        else
            cout << i - t % i << endl; 
    }
    return 0;
}
