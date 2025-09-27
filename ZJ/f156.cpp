// f165. 棒棒糖事件

#include<iostream>
using namespace std;

int main(){
    int a, b;
    cin >> a >> b;
    if (b == 0 || a % b == 0)
        cout << "OK!" << endl;
    else
        cout << a % b;
    return 0;
}
