// b681. 1. 山洞探險

#include<iostream>
using namespace std;

int main(){
    // int a, b = 0;
    // cin >> a;
    // for (int i = 1; ;i++){
    //     if (i % 2 == 0)
    //         b -= i;
    //     else 
    //         b += i;
    //     if (b == a){
    //         cout << i << endl;
    //         break;
    //     } 
    // }
    int a;
    cin >> a;
    if (a > 0)
        cout << a * 2 - 1 << endl;
    else
        cout << a * -2 << endl;
    return 0;
}
