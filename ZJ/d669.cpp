// d669. 11677 - Alarm Clock

#include<iostream>
using namespace std;

int main(){
    int hr1, min1, hr2, min2;
    while (cin >> hr1 >> min1 >> hr2 >> min2){
        if (hr1 == min1 && min1 == hr2 && hr2 == min2 && min2 == 0)
            break;
        if (hr2 < hr1 || (hr1 == hr2 && min1 > min2))
            hr2 += 24;
        min1 += hr1 * 60;
        min2 += hr2 * 60;
        cout << min2 - min1 << endl;
    }
    return 0;
}
