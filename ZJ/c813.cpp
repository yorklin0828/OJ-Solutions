// 	c813. 11332 - Summing Digits

#include<iostream>
#include<string>
using namespace std;

string f(string n){
    int length = n.size(), sum = 0;
    for(int i = 0; i < length; i++){
        sum += n[i] - '0';
    }

    string str = to_string(sum);
    int str_len = str.size();
    if(str_len == 1){
        return str;
    }else{
        return f(str);
    }
}

int main(){
    string n;
    while(cin >> n){
        if(n == "0"){
            break;
        }
        cout << f(n) << "\n";
    }
    return 0;
}
