// a040. 阿姆斯壯數

#include<iostream>
using namespace std;

int power(int base, int exp){
    int result = 1;
    while (exp--){
        result *= base;
    }
    return result;
}

int findArmstrongNumber(int n, string str, int length){
    int sum = 0;
    for (int i = 0; i < length; i++){
        sum += power(str[i] - '0', length);
    }
    if (n == sum)
        return n;
    else
        return 0;    
}

int main(){
    int a, b;
    bool isFind = false;
    cin >> a >> b;
    for (; a < b; a++){
        string str = to_string(a);
        int length = str.size();
        int ans = findArmstrongNumber(a, str, length);
        if (ans > 0){
            cout << ans << " ";
            isFind = true;
        }    
    }
    if (!isFind)
        cout << "none" << endl;
    return 0;
}
