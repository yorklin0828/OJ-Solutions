// f073. 切牌

#include<iostream>
#include<string>
#include<vector>
using namespace std;

int main(){
    int length;
    cin >> length;
    vector<string> strArr(length);

    for(int i = 0; i < length; i++){
        cin >> strArr[i];
    }

    int n;
    cin >> n;
    for(int i = n; i < length; i++){
        cout << strArr[i] << " ";
    }
    for(int i = 0; i < n; i++){
        if(i == n - 1){
            cout << strArr[i];
        }else{
            cout << strArr[i] << " ";
        }
    }
    return 0;
}
