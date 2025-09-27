// d235. 10929 - You can say 11

#include<iostream>
using namespace std;

int main(){
    string str;
    while(cin >> str){
        if(str == "0"){
            break;
        }
        
        int len = str.size(), even_sum = 0, odd_sum = 0;
        for(int i = 0; i < len; i++){
            if(i % 2){
                odd_sum += str[i] - '0';
            }else{
                even_sum += str[i] - '0';
            }
        }
        if((even_sum - odd_sum) % 11){
            cout << str << " is not a multiple of 11.\n";
        }else{
            cout << str << " is a multiple of 11.\n";
        }
    }
    return 0;
}
