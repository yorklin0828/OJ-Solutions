// d237. 質數合

#include<iostream>
#include<cmath>
using namespace std;

int main() {
    long long int ans = 0;
    for (int i = 2; i <= 2000000; i++){
        bool isPrime = true;
        for (int j = 2; j <= sqrt(i); j+=(j==2 ? 1 : 2)){
            if (i % j == 0){
                isPrime = false;
                break;
            }
        }
        if (isPrime){
            ans += i;
        }
    }
    cout << ans << endl;
    return 0;
}
