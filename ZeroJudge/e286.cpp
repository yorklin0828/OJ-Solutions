// e286. 籃球比賽

#include <cstdio>

using namespace std;

int main(){
    int a[4]{};
    int b[4]{};
    int sumA{}, sumB{};

    for(int i{}; i < 4; i++){
        scanf("%d", &a[i]);
        sumA += a[i];
    }
    for(int i{}; i < 4; i++){
        scanf("%d", &b[i]);
        sumB += b[i];
    }
    printf("%d:%d\n", sumA, sumB);
    int win = (sumA > sumB ? 1 : 0);

    sumA = 0; sumB = 0;
    for(int i{}; i < 4; i++){
        scanf("%d", &a[i]);
        sumA += a[i];
    }
    for(int i{}; i < 4; i++){
        scanf("%d", &b[i]);
        sumB += b[i];
    }
    printf("%d:%d\n", sumA, sumB);
    win += (sumA > sumB ? 1 : 0);

    printf("%s", (win ? (win == 1 ? "Tie" : "Win") : "Lose"));

    return 0;
}