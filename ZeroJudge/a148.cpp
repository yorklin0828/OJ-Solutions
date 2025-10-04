// a148. You Cannot Pass?!

#include<iostream>
using namespace std;

int main(){
    int n;
    while (cin >> n){
        int a, sum = 0;
        for (int i = 0; i < n; i++){
            cin >> a;
            sum += a;
        }
        if (sum > 59 * n)
            cout << "no" << endl;
        else
            cout << "yes" << endl;    
    }
    return 0;
}
