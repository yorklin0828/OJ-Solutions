// d124. 3的倍数

#include <iostream>
using namespace std;

int main() {
    string num;
    while (cin >> num){
        int length = num.size(), ans = 0;
        for (int i = 0; i < length; i++){
            ans += (int(num[i]) - '0');
        }
        if (ans % 3 == 0)
            cout << "yes" << endl;
        else
            cout << "no" << endl;
    }
    return 0;
}
