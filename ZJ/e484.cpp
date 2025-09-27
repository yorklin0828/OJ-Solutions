// e484. 我是優質學生

#include<iostream>
#include<cmath>
using namespace std;

int main(){
    int n;
    cin >> n;
    bool isPrime = true;
    for (int i = 2; i <= sqrt(n); i += (i == 2 ? 1 : 2)){
        if (n % i == 0){
            isPrime = false;
            break;
        }
    }
    if (isPrime)
        cout << "yes" << endl;
    else
        cout << "no" << endl;    
    return 0;
}
