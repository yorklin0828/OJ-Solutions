// d068. 該減肥了！

#include<iostream>
using namespace std;

int main(){
    int a;
    cin >> a;
    if (a > 50){
        cout << --a << endl;
    }else{
        cout << a << endl;
    }
    // cout << (a > 50 ? --a : a) << endl;
    return 0;
}
