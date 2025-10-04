// d460. 山六九之旅

#include<iostream>
using namespace std;

int main(){
    int array[6] = {0, 0, 590, 790, 890, 399};
    int a, i;
    cin >> a;
    i = (a >= 0) + (a >= 6) + (a >= 12) + (a >= 18) + (a >= 60);
    cout << array[i] << endl;
    return 0;
}
