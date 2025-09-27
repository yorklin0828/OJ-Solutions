// d070. 格瑞哥里的煩惱 (0 尾版)

#include<iostream>
using namespace std;

int main(){
    while (true){
        int a;
        cin >> a;
        if (a == 0)
            break;
        else if (a % 4 == 0 && a % 100 != 0 || a % 400 == 0)
            cout << "a leap year" << endl;
        else
            cout << "a normal year" << endl;
    }  
    return 0;
}
