// j940. 科學記號
#include<iostream>
using namespace std;

int main(){
    string str;
    int n;
    cin >> str >> n;
    for(int i = 0; i < str.size(); i++){
        cout << str[i] - '0';
        if(i == n){
            cout << ".";
        }
    }
    cout << endl;
    return 0;
}