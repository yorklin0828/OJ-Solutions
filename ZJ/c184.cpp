// c184. 盈虧互補

#include<cstdio>
#include<cmath>
#include <algorithm>
#include<vector>
using namespace std;

int findFactor(int n, vector<int>& arr){
    int sum = 0, sq = sqrt(n);

    for(int i = 1; i <= sq; i++){
        if(n % i == 0){
            sum += i;
            arr.push_back(i);

            int other = n / i;
            if(other != i && other != n){
                sum += other;
                arr.push_back(other);
            }
        }
    }
    return sum;
}

void output(vector<int>& arr, int sum){
    int length = arr.size();
    sort(arr.begin(), arr.end());

    for(int i = 0; i < length; i++){
        if(i + 1 < length){
            printf("%d+", arr[i]);
        }else{
            printf("%d=", arr[i]);
        }
    }
    printf("%d\n", sum);
}

int main(){
    int n;
    scanf("%d", &n);
    vector<int> arr;

    int sum = findFactor(n, arr);
    if(sum == n){
        output(arr, sum);
        printf("%d is perfect.", sum);
    }else if(sum == 1){
        printf("1=1\n=0\n%d has no friends.", n);
    }else{
        int m = sum;
        vector<int> newArr;
        int newSum = findFactor(m, newArr);
        
        output(arr, sum);
        output(newArr, newSum);

        if(n == newSum){
            printf("%d and %d are friends.", n, m);
        }else{
            printf("%d has no friends.", n);
        }
    }
    return 0;
}
