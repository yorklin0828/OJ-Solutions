// d489. 伏林的三角地

#include<iostream>
using namespace std;

int main(){
    int a, b, c, s;
    long long int area;
    cin >> a >> b >> c;
    s = (a + b + c) / 2;
    area = s * (s - a) * (s - b) * (s - c);
    cout << area;
    return 0;
}
