// a248. 新手訓練 ~ 陣列應用

#include<iostream>
using namespace std;

int main(){
    int a, b, length, integer;
    ios::sync_with_stdio(0);
    cin.tie(0);
    while (cin >> a >> b >> length){
        int* arr = new int[length];
        integer = int(a / b);
        a %= b;
        for (int i = 0; i < length; i++){
            a *= 10;
            arr[i] = int(a / b);
            a %= b;
        }
        cout << integer << ".";
        for (int i = 0; i < length; i++){
            cout << arr[i];
        }
        cout << endl;
        delete[] arr;
    }
    return 0;
}
