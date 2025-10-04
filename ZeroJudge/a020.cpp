// 	a020. 身分證檢驗

#include<cstdio>

int CityNumber(char c){
    int num = 0;
    if(c >= 'A' && c <= 'H'){
        num = c - 'A' + 10;
    }else if(c >= 'J' && c <= 'N'){
        num = c - 'J' + 18;
    }else if(c >= 'P' && c <= 'V'){
        num = c - 'P' + 23;
    }else if(c == 'I') num = 34;
     else if(c == 'O') num = 35;
     else if(c == 'W') num = 32;
     else if(c == 'X') num = 30;
     else if(c == 'Y') num = 31;
     else if(c == 'Z') num = 33;
     
     return num;
}


int main(){
    char c[10];
    for(int i = 0; i < 10; i++){
        scanf(" %c", &c[i]);
    }
    int num = CityNumber(c[0]);
    int sum = (num % 10) * 9 + (num / 10);

    int array[9] = {8,7,6,5,4,3,2,1,1};
    for(int i = 1; i <= 9; i++){
        sum += (c[i]-'0') * array[i-1];
    }

    printf("%s\n", (sum % 10 == 0 ? "real" : "fake"));
    return 0;
}
