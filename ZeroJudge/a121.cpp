// a121. 質數又來囉

#include<iostream>
#include<cmath>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int a, b;
    while (cin >> a >> b){
        int c = 0;
        if (a == 1)
            a++;
        for (; a <= b; a++){
            bool isPrime = true;
            for (int i = 2; i <= sqrt(a); i += (i == 2 ? 1 : 2)){
                if (a % i == 0){
                    isPrime = false;
                    break;
                }
            }
            if (isPrime){
                c++;
            }    
        }
        cout << c << endl;
    }
    return 0;
}
