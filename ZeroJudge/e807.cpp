#include<cstdio>
#include<vector>
#include<string>
using namespace std;

int main(){
    vector<double> sum1( 7, 0);
    vector<double> sum2(4, 0);

    for(int i = 0; i < 7; i++){
        double a, b, c, d;
        scanf("%lf%lf%lf%lf", &a, &b, &c, &d);
        sum1[i] += (a + b+ c+ d);
        sum2[0] += a;
        sum2[1] += b;
        sum2[2] += c;
        sum2[3] += d;
    }
    double max1 = -1e9;
    int max_index{};
    double max2 = -1e9;
    string ans;
    for(int i = 0; i < 7; i++){
        if(sum1[i] > max1){
            max1 = sum1[i];
            max_index = i;
        }
        if(i < 4 && sum2[i] > max2){
            max2 = sum2[i];
            if(i == 0) ans = "morning";
            if(i == 1) ans = "afternoon";
            if(i == 2) ans = "night";
            if(i == 3) ans = "early morning";
        }
    }
    printf("%d\n%s", ++max_index, ans.c_str());

    return 0;
}
