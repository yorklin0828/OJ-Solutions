// e835. p2.表演座位 (Seats)

#include<iostream>
using namespace std;

int main(){
    int i, a, b, c;
    cin >> i;
    if (i <= 2500){
        a = 1;
        b = int(i / 25) + 1;
        c = i % 25;
    }else if (i > 7500){
        a = 3;
        b = int((i - 7500) / 25) + 1;
        c = (i - 7500) % 25;
    }else{
        a = 2;
        b = int((i - 2500) / 50) + 1;
        c = (i - 2500) % 50;
    }
    if ((a == 1 || a == 3) && c == 0){
        c += 25;
        b--;
    }else if (a == 2 && c == 0){
        c += 50;
        b--;
    }
    cout << a << " " << b << " " << c << endl;
    return 0;
}
