// a007. 判斷質數

#include<iostream>
#include<cmath>
using namespace std;

int main(){
    ios::sync_with_stdio(0); 
    cin.tie(0); 
    int arr[100000];
    int primeIndex = 0;
    for (int i = 2; i < 100000; i++){
        bool isPrime = true;
        int sq = sqrt(i);
        for (int j = 2; j <= sq; j++){
            if (i % j == 0){
                isPrime = false;
                break;
            }
        }
        if (isPrime)
            arr[primeIndex++] = i;
    }

    int n;
    while (cin >> n){
        bool isPrime = true;
        int sq = sqrt(n);
        for (int i = 0; i < primeIndex; i++){
            if (arr[i] > sq)
                break;
            if (n % arr[i] == 0){
                isPrime = false;
                break;
            }
        }
        if (isPrime)
            cout << "質數" << endl;
        else
            cout << "非質數" << endl;    
    }
    return 0;
}
