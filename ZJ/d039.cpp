// d039. 11044 - Searching for Nessy

#include<iostream>
#include<cmath>
using namespace std;

int main(){
    int n;
    cin >> n;
    for (int i = 0; i < n; i++){
        double a, b;
        cin >> a >> b;
        a = int(ceil((a - 2) / 3));
        b = int(ceil((b - 2) / 3));
        cout << int(a * b) << endl;
    }
    return 0;
}
