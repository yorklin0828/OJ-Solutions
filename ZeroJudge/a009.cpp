// a009. 解碼器

#include<iostream>
using namespace std;

int main(){
    char a;
    while (cin >> a){
        cout << char(int(a - 7));
    }
    return 0;
}
