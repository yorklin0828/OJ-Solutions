// c022. 10783 - Odd Sum

#include<iostream>
using namespace std;

int main(){
    int a;
    cin >> a;
    for (int i = 1; i <= a; i++){
        int x, y, ans = 0;
        cin >> x;
        cin >> y;
        x = (x % 2 == 0 ? ++x : x);
        y = (y % 2 == 0 ? --y : y);
        while (x <= y){
            ans += x;
            x += 2;
        }
        cout <<"Case " << i << ": "<< ans << endl;
    }
    return 0;
}
