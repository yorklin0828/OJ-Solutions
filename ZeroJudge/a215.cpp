// a215. 明明愛數數

#include<iostream>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int a, b;
    while (cin >> a >> b){
        int sum = 0, count = 0;
        while (true){
            sum += a;
            a++;
            ++count;
            if (sum > b){
                break;
            }
        }
        cout << count << endl;
    }
    return 0;
}
