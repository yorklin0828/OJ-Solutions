// d067. 格瑞哥里的煩惱 (1 行版)

#include<iostream>
using namespace std;

int main(){
    int a;
    cin >> a;
    if (a % 4 == 0 && a % 100 != 0 || a % 400 == 0)
        cout << "a leap year" << endl;
    else
        cout << "a normal year" << endl;
    return 0;
}
