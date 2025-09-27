// q836. 1. 小心陷阱

#include<cstdio>

int main(){
    int k, x1, x2, y1, y2, position = 0;
    scanf("%d%d%d%d%d", &k, &x1, &y1, &x2, &y2);

    while(k > 0){
        position += k;
    
        if(position % x1 == 0){
            k -= y1;
        }
        if(position % x2 == 0){
            k -= y2;
        }
    }
    printf("%d", position);
    return 0;
}