// d086. 態度之重要的證明

#include<iostream>
using namespace std;

int main(){
    string str;
    while(cin >> str){
        if(str == "0"){
            break;
        }
        int length = str.size(), ans = 0;
        bool fail = false;
        for(int i = 0; i < length; i++){
            if(str[i] >= 'a' && str[i] <= 'z'){
                str[i] -= 'a';
                str[i]++;
            }else if(str[i] >= 'A' && str[i] <= 'Z'){
                str[i] -= 'A';
                str[i]++;
            }else{
                fail = true;
                break;
            }
            ans += str[i];
        }

        if(fail){
            cout << "Fail\n";
        }else{
            cout << ans << "\n";
        }
    }
    return 0;
}
