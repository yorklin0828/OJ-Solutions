// a010. 因數分解

#include<iostream>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;
    bool first = true;
    for (int i = 2; i <= n; i++){
        int count = 0;
        while (n % i == 0){
            n /= i;
            count++;
        }
        if (count > 0){
            if (!first)
                cout << " * ";
            first = false;
        }
        
        if (count > 1)
            cout << i << "^" << count;
        else if (count == 1)
            cout << i;

        if (n == 1)
            break;    
    }
    return 0;
}
