// d827. 買鉛筆

#include<iostream>
using namespace std;

int main(){
    int a;
    cin >> a;
    cout << ((a / 12) * 50) + ((a % 12) * 5) << endl;
    return 0;
}
