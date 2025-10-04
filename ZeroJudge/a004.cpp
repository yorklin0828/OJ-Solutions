// a004. 文文的求婚

#include<iostream>
using namespace std;

int main(){
    int a;
    string ans;
    while (cin >> a){
        if (a % 4 == 0 && a % 100 != 0 || a % 400 == 0)
            ans = "閏年";
        else
            ans = "平年";
        cout << ans << endl;
    }
    return 0;
}
