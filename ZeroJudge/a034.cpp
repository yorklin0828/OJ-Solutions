// a034. 二進位制轉換

#include<iostream>
using namespace std;

int power(int base, int exp){
    int result = 1;
    while (exp--){
        result *= base;
    }
    return result;
}

int main(){
    int n, maxExp;
    while (cin >> n){
        for (int i = 0; ; i++){
            if (n >= power(2, i)){
                maxExp = i;
            }else
                break;
        }
        while (maxExp >= 0){
            int val = power(2, maxExp);
            cout << n / val;
            if (n >= val)
                n %= val;
            maxExp--;
        }
        cout << endl;
    }
    return 0;
}
