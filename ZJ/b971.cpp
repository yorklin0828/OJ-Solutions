// b971. 等差數列

#include<iostream>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int a1, an, d;
    cin >> a1 >> an >> d;
        for (; (a1 > an ? a1 >= an : an >= a1); a1 += d){
            cout << a1 << " ";
            if (a1 == an) break;
        }
    
    return 0;
}
