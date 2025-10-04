// e511. 11364 - Parking

#include<iostream>
using namespace std;

int main(){
    int a;
    cin >> a;
    for (int i = 0; i < a; i++){
        int b, max = 0, min = 0;
        cin >> b;
        for (int j = 0; j < b; j++){
            int n;
            cin >> n;
            if (j == 0){
                max = n;
                min = n;
            }else{
                if (n > max)
                    max = n;
                if (n < min)
                    min = n;
            }        
        }
        cout << (max - min) * 2 << endl;
    }
    return 0;
}
