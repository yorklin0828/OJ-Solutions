// d072. 格瑞哥里的煩惱 (Case 版)

#include<iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++){
        int a;
        cin >> a;
        if (a % 4 == 0 && a % 100 != 0 || a % 400 == 0)
            cout << "Case " << i << ": " << "a leap year" << endl;
        else
            cout << "Case " << i << ": " << "a normal year" << endl;
    } 
    return 0;
}
