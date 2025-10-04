// c085. 00350 - Pseudo-Random Numbers
#include<cstdio>
#include<vector>

int main(){
    int z, i, m, l, Case = 1;
    while(scanf("%d %d %d %d", &z, &i, &m, &l)){
        if(z + i + m + l == 0){
            break;
        }
        std::vector<bool> arr(m, false);
        int cycleLength = 0;
        int k = (z * k + i) % m;
        
        while(!arr[k]){
            arr[k] = true;
            k = (z * k + i) % m;
            cycleLength++;
        }
        printf("Case %d: %d\n", Case, cycleLength);
        Case++;
    }
}
