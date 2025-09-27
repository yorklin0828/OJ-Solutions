// d066. 上學去吧！

#include<iostream>
using namespace std;

int main(){
    int a, b;
    cin >> a >> b;
    if ((a >= 8) && (a <= 16))
        cout << "At School" << endl;
    else if ((a == 7) && (b >= 30))
        cout << "At School" << endl;
    else
        cout << "Off School" << endl;
    return 0;
}
