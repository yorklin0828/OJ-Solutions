// d190. 11462 - Age Sort

#include<iostream>
#include<cstdio>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int length;
    while (cin >> length){
        if (length == 0)
            break;
        int arr[100] = {0};
        for (int i = 0; i < length; i++){
            int age;
            cin >> age;
            arr[age]++;
        }
        for (int k = 0; k < 100; k++){
                if (arr[k] > 0){
                    while (arr[k]--){
                        printf("%d ", k);
                    }
                }
            }
        printf("\n");
    }    
    return 0;
}
