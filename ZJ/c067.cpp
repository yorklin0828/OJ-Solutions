// c067. 00591 - Box of Bricks

#include<iostream>
using namespace std;

int main(){
    for (int i = 1; ; i++){
        int n, sum = 0, ans = 0;
        cin >> n;
        if (n == 0)
            break;
        int* array = new int[n];
        for (int j = 0; j < n; j++){
            cin >> array[j];
            sum += array[j];
        }
        for (int k = 0; k < n; k++){
            if (array[k] > (sum / n))
                ans += array[k] - (sum / n);
        }
        cout << "Set #" << i << endl;
        cout << "The minimum number of moves is " << ans << "." << endl;
        delete[] array;
    }
    return 0;
}
