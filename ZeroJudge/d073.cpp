// d073. 分組報告

#include<iostream>
using namespace std;

int main(){
    int a, b = 0;
    cin >> a;
    while (a >= 3){
        a -= 3;
        b++;
    }
    cout << (a == 0 ? b : ++b) << endl;
    return 0;
}
