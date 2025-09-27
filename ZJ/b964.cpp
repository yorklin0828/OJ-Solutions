// b964. 1. 成績指標

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    scanf("%d", &n);

    vector<int> grade(n);
    for(int i = 0; i < n; i++){
        scanf("%d", &grade[i]);
    }
    sort(grade.begin(), grade.end());

    int high = -1, low = 101;
    for(int i = 0; i < n; i++){
        printf("%d ", grade[i]);
        if(grade[i] >= 60){
            low = min(low, grade[i]);
        }else{
            high = max(high, grade[i]);
        }
    }

    if(high == -1) printf("\nbest case\n");
    else printf("\n%d\n", high);

    if(low == 101) printf("\nworst case\n");
    else printf("\n%d\n", low);

    return 0;
}
