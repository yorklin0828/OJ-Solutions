// c079. 10346 - Peter's Smokes

#include<iostream>
using namespace std;

int main(){
    int n, k;
    while (cin >> n >> k){
        int ans = n, butts = n;
        while (butts / k > 0){
            int change = butts / k;
            ans += change;
            butts %= k;
            butts += change;
        }
        cout << ans << endl;
    }
    return 0;
}
