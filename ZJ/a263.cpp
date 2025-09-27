// a263. 日期差幾天

#include<iostream>
#include<cmath>
using namespace std;

int main(){
    int year1, month1, day1, year2, month2, day2;
    ios::sync_with_stdio(0);
    cin.tie(0);
    while (cin >> year1 >> month1 >> day1 >> year2 >> month2 >> day2){
        for (int i = 1; i < year1; i++){
            if (i % 4 == 0 && i % 100 != 0 || i % 400 == 0)
                day1 += 366;
            else
                day1 += 365;
        }
        for (int j = 1; j < month1; j++){
            if (((j <= 7) && (j % 2 == 1)) || (j > 7) && (j % 2 == 0))
                day1 += 31;
            else if (j == 2 && (year1 % 4 == 0 && year1 % 100 != 0 || year1 % 400 == 0))
                day1 += 29;
            else if (j != 2)
                day1 += 30;
            else
                day1 += 28;
        }
        for (int i = 1; i < year2; i++){
            if (i % 4 == 0 && i % 100 != 0 || i % 400 == 0)
                day2 += 366;
            else
                day2 += 365;
        }
        for (int j = 1; j < month2; j++){
            if (((j <= 7) && (j % 2 == 1)) || (j > 7) && (j % 2 == 0))
                day2 += 31;
            else if (j == 2 && (year2 % 4 == 0 && year2 % 100 != 0 || year2 % 400 == 0))
                day2 += 29;
            else if (j != 2)
                day2 += 30;
            else
                day2 += 28;
        }
        cout << abs(day2 - day1) << endl;
    }
    return 0;
}
