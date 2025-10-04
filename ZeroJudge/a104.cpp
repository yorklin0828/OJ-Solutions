// a104. 排序

#include<iostream>
using namespace std;

int main(){
    int length, lowIndex, temp;
    while (cin >> length){
        int array[length];
        for (int i = 0; i < length; i++){
            cin >> array[i];
        }
        for (int j = 0; j < length - 1; j++){
            lowIndex = j;
            for (int i = j + 1; i < length; i++){
                if (array[i] < array[lowIndex])
                    lowIndex = i;
            }
            temp = array[j];
            array[j] = array[lowIndex];
            array[lowIndex] = temp;
        }
        for (int i = 0; i < length; i++){
            cout << array[i] << " ";
        }
        cout << endl;
    }
    return 0;
}
