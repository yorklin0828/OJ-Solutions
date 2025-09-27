// d485. 我愛偶數

#include<iostream>
#include<cmath>
using namespace std;

int main(){
    long long int a, b;
    cin >> a >> b;
    cout << ((a % 2 == 0) + (b % 2 == 0) + abs(b - a)) / 2;
    return 0;
}
