// c004. 10812 - Beat the Spread!

#include<iostream>
using namespace std;

int main(){
    int i;
    cin >> i;
    for (; i > 0; i--){
        int a, b, c, d;
        cin >> a >> b;
         if (b > a){
            cout << "impossible" << endl;
        }else if ((a - b) % 2 != 0){
            cout << "impossible" << endl;
        }else{
            d = (a - b) / 2;
            c = d + b;
            cout << c << " " << d << endl;
        }
        
    }
    return 0;
}
