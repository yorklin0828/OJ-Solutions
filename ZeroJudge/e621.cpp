// e621. 1. 免費停車 (Free Parking)

#include <cstdio>

int main(){
    int n;
    scanf("%d", &n);
    while(n--){
        int a, b, c;
        scanf("%d%d%d", &a, &b, &c);
        bool conform = false;
        for(int i = a + 1; i < b; i++){
            if(i % c){
                printf("%d ", i);
                conform = true;
            }
        }
        printf("%s", (conform ? "\n" : "No free parking spaces.\n"));
    }
    return 0;
}