// f044. 2. 史萊姆生態區 (Slime) 

#include<cstdio>

int main(){
    int slimeKing, m, day = 0, smallSlime = 0;
    scanf("%d%d", &slimeKing, &m);
    while(m != smallSlime){
        smallSlime *= 2;
        smallSlime += slimeKing;
        day++;
    }
    printf("%d", day);
    return 0;
}
