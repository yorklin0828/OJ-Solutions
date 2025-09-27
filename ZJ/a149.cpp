// a149. 乘乘樂

#include<iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    for (int i = 0; i < n; i++){
        string str;
        cin >> str;
        int length = str.size(), ans = 1;
        for (int j = 0; j < length; j++){
            ans *= str[j] - '0';
        }
        cout << ans << endl; 
    }
}
