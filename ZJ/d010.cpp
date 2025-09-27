// d010. 盈數、虧數和完全數

#include<iostream>
using namespace std;

int main(){
    int n;
    while (cin >> n){
        int sum = 0;
        for (int i = 1; i < n; i++){
            if (n % i == 0)
                sum += i;
        }
        if (n == sum)
            cout << "完全數" << endl;
        else if (n > sum)
            cout << "虧數" << endl;
        else    
            cout << "盈數" << endl;
    }
    return 0;
}
