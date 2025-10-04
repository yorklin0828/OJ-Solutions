// c459. 2. 自戀數

#include<iostream>
using namespace std;

int pow(int base, int exp){
    int result = 1;
    while(exp--){
        result *= base;
    }
    return result;
}

int turnToDecimal(int m, int n){
    int result = 0;
    int temp, power = 0;
    while(n > 0){
        temp = n % 10;
        n /= 10;
        result += temp * pow(m, power);
        power++;
    }
    return result;
}

bool isNarcissisticNumber(int n, int k){
    string str = to_string(n);
    int length = str.size(), sum = 0;
    for(int i = 0; i < length; i++){
        sum += pow(str[i] - '0', length);
    }
    return sum == k;
}

int main(){
    int m, n, count = 1;
    while(cin >> m >> n){
        int k = turnToDecimal(m, n);
        if(isNarcissisticNumber(n, k)){
            cout << "YES";
        }else{
            cout << "NO";
        }
        count++;
        cout << endl;
    }
    return 0;
}
