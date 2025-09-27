// b884. 電腦教室的傑克

#include<iostream>
#include<cmath>
using namespace std;

int main(){
    int i;
    cin >> i;
    for (; i > 0; i--){
        int a, b;
        double r, yee;
        cin >> a >> b;
        r = sqrt(abs(a) + abs(b));
        yee = 100 - r * r;
        if (0 < yee && yee <= 30) cout << "sad!" << endl;
        else if (30 < yee && yee <= 60) cout << "hmm~~" << endl;
        else if (60 < yee && yee < 100) cout << "Happyyummy" << endl;
        else cout << "evil!!" << endl;
    }
    return 0;
}
