// a216. 數數愛明明

#include<iostream>
using namespace std;

long long int f(long long int n){
    if (n == 1)
        return 1;
    return n + f(n - 1);    
}

long long int g(long long int n){
    if (n == 1)
        return 1;
    return f(n) + g(n - 1);
}

int main(){
    long long int n;
    while (cin >> n){
        cout << f(n) << " " << g(n) << endl;
    }
    return 0;
}