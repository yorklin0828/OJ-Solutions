// a539. 10327 - Flip Sort

#include<iostream>
using namespace std;

int main(){
    int length;
    while (cin >> length){
        int* arr = new int[length];
        int count = 0;
        for (int i = 0; i < length; i++){
            cin >> arr[i];
        }
        for (int j = 0; j < length - 1; j++){
            for (int i = 0; i < length - 1; i++){
                if (arr[i] > arr[i + 1]){
                    swap(arr[i], arr[i + 1]);
                    count++;
                }
            }
        }
        cout << "Minimum exchange operations : " << count << endl;
        delete[] arr;
    }
    return 0;
}
