// a065. 提款卡密碼

#include<iostream>
#include<cmath>
using namespace std;

int main(){
    char charArray[7];
    int intArray[7];
    for (int i = 0; i < 7; i++){
        cin >> charArray[i];
        intArray[i] = charArray[i];
    }
    for (int i = 0; i < 6; i++){
        intArray[i] = abs(intArray[i] - intArray[i + 1]);
    }
    for (int i = 0; i < 6; i++){
        cout << intArray[i];
    }
    cout << endl;
    return 0;
}
