// k026. 中位數

#include<iostream>
using namespace std;

int main(){
    int length;
    cin >> length;
    int* arr = new int[length];
    for (int i = 0; i < length; i++){
        cin >> arr[i];
    }
    if (length % 2 == 0)
        cout << (arr[length / 2 - 1] + arr[length / 2]) / 2 << endl;
    else
        cout << arr[length / 2] << endl;

    delete[] arr;
    return 0;
}