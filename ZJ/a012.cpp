// a012. 10055 - Hashmat the Brave Warrior

#include<iostream>
using namespace std;

int main(){
    long long int a, b;
    while(cin >> a >> b){
        if (a > b)
            cout << a - b << endl;
        else if (b > a)
            cout << b - a << endl;
        else
            cout << 0 << endl; 
    }
    return 0;
}
