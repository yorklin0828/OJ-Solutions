// d074. 電腦教室

#include<iostream>
using namespace std;

int main(){
    int i, max = 0;
    cin >> i;
    for (; i > 0; i--){
        int a;
        cin >> a;
        if (a > max){
            max = a;
        }
    }
    cout << max << endl;
    return 0;
}
