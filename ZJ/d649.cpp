// d649. 數字三角形

#include<iostream>
using namespace std;

int main(){
    int n;
    while (cin >> n){
        if (n == 0)
            break;
        for (int i = 1; i <= n; i++){
            for (int j = 0; j < n - i; j++){
                cout << "_";
            }
            for (int k = 0; k < i; k++){
                cout << "+";
            }
            cout << endl;
        }    
    }
    return 0;
}
